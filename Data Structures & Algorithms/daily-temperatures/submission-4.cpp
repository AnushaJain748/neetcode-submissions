class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        vector<int> v;
       for(int i=temperatures.size()-1;i>=0;i--){
    
            while(!s.empty() && temperatures[i]>=s.top().first){
            s.pop();
            }
        if(s.empty())
        v.push_back(0);
        else
       v.push_back(s.top().second-i);
        s.push({temperatures[i],i});
       }
reverse(v.begin(),v.end());
return v;
    }
};


