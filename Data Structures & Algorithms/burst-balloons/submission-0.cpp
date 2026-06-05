class Solution {
public:
int maxcoins=0;
    int dfs(vector<int> num,vector<vector<int>> dp,int l, int r){
        if(l>r)
        return 0;
        if(dp[l][r]!=-1)
        return dp[l][r];
        
        dp[l][r]=0;
        for(int i=l;i<=r;i++){
            int coins= num[l-1]*num[i]*num[r+1];
            coins+=dfs(num,dp,l,i-1)+dfs(num,dp,i+1,r);
          
            dp[l][r]=max(dp[l][r], coins);
        }
    return dp[l][r];
    }
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        vector<int> vis(n+2,0);
        vector<int> num;
        num.push_back(1);
        for(int i=0;i<n;i++){
            num.push_back(nums[i]);
        }
        num.push_back(1);
        vector<vector<int>> dp(n+2,vector<int>(n+2,-1));
       return  dfs(num,dp,1,num.size()-2);
    }
};
