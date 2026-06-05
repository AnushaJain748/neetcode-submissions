class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int total= accumulate(nums.begin(),nums.end(),0);
        if(total%2!=0)
        return false;
        int summ=total/2;
        bool dp[nums.size()+1][summ+1];
        for(int i=0;i<=nums.size();i++){
            for(int j=0;j<=summ;j++){
                if(i==0)
                dp[i][j]=false;
                if(j==0)
                dp[i][j]=true;
            }
        }
             for(int i=1;i<=nums.size();i++){
            for(int j=1;j<=summ;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[nums.size()][summ];
    }
};
