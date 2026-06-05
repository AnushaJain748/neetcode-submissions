class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> v;
        v.push_back(nums[0]);
        int LIS=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]> v.back())
            {
                    v.push_back(nums[i]);
            }
            else{
                int ind=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
                v[ind]=nums[i];
            }
        }
        return v.size();
    }
};



// class Solution {
// public:
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n, 1); // Every element is an LIS of length 1 by itself
//         int maxLen = 1;

//         for (int i = 1; i < n; ++i) {
//             for (int j = 0; j < i; ++j) {
//                 if (nums[j] < nums[i]) {
//                     dp[i] = max(dp[i], dp[j] + 1);
//                 }
//             }
//             maxLen = max(maxLen, dp[i]);
//         }

//         return maxLen;
//     }
// };