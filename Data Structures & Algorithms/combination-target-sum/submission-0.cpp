class Solution {
public:
vector<vector<int>> ans;
void backtrack(int start,int n,vector<int>& sub,vector<int> nums,int localsum,int target){
    if(localsum==target)
        ans.push_back(sub);
    for(int i=start;i<n;i++){
        if(localsum+nums[i]<=target)
        {
            sub.push_back(nums[i]);
            backtrack(i,n,sub,nums,localsum+nums[i],target);
            sub.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> sub;
        int localsum=0;
        backtrack(0,n,sub,nums,localsum,target);
        
        return ans;
    }
};
