class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // DO BOTH WITH DP
        int maxcount=0;
        vector<int> v(prices.size(),INT_MAX);
        v[0]=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>v[i-1])
            maxcount=max(maxcount,prices[i]-v[i-1]);
            v[i]=min(prices[i],v[i-1]);
        }
        return maxcount;
    }
};
