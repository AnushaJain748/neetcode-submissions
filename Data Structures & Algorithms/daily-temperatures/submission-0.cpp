class Solution {
public:
        vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int> res(temperatures.size(),0);
       stack<int> s;
       s.push(temperatures.size()-1);
       for(int i=temperatures.size()-2;i>=0;i--){
        if(!s.empty() && temperatures[i]<temperatures[s.top()])
        res[i]=s.top()-i;
       else
       {
        while(!s.empty() && temperatures[i]>=temperatures[s.top()]){
            s.pop();
        }
        if(!s.empty())
        res[i]=s.top()-i;
        else
        res[i]=0;
       }
       s.push(i);
       }
       return res;
    }
};


