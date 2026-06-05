class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total%2!=0)
        return false;
        else
        total=total/2;
        int n=nums.size();
        int dp[n+1][total+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=total;j++){
             //   else
                dp[i][j]=0;
            }
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=total;j++){
                if(nums[i-1]<=j)
                dp[i][j]= dp[i-1][j-nums[i-1]] || dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        if(dp[n][total]==1)
        return true;
        else
        return false;
    }
};
