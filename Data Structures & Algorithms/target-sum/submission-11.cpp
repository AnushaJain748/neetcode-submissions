class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
// - P = sum of numbers with + sign
// - N = sum of numbers with - sign
// - Then, P - N = target
// - Since P + N = sum(nums), solving for P:
// - P = (sum(nums) + target) / 2
// - 


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


// Because we want to fill the entire DP table from the smallest subproblem (sum = 0) up to the target amount. Skipping j = 0 would mean:
// - So we initialize dp[0][0] = 1 to reflect that there's one way to make sum 0 with 0 elements.
