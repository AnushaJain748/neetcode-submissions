class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        int dp[n+1][amount+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=amount;j++){
                if(j==0)
                dp[i][j]=1;
                if(i==0)
                dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(coins[i-1]<=j)
                dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][amount]==INT_MAX-1)
        return 0;
        else
        return dp[n][amount];
    }
};
