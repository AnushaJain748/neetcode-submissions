class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       int n=temperatures.size();
       vector<int> v;
       v.push_back(0);
       stack<pair<int,int>> s;
       s.push({temperatures[n-1],n-1});
       for(int i=temperatures.size()-2;i>=0;i--){
            while(!s.empty() && s.top().first<=temperatures[i] ){
                s.pop();
            }
            if(s.empty()){
                v.push_back(0);
            }
            else{
                v.push_back(s.top().second-i);
            }
            s.push({temperatures[i],i});
       }
       reverse(v.begin(),v.end());
       return v; 
    }
};
