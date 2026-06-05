class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int summ=accumulate(nums.begin(),nums.end(),0);
            if ((summ + target) % 2 != 0 || summ < abs(target)) {
            return 0;
        }
        int amount=(summ+target)/2;
        int dp[n+1][amount+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=amount;j++){
           
               
                dp[i][j]=0;
                if(j==0 && i==0)
                dp[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=amount;j++){
                if(nums[i-1]<=j)
                dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][amount];
    }
};
