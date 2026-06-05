class Solution {
public:
vector<vector<int>> ans;
void backtrack(int start,int n,vector<int>& sub,vector<int>& nums,int localsum,int target){
    if(localsum==target)
        ans.push_back(sub);
    for(int i=start;i<n;i++){
        if(i>start && nums[i]==nums[i-1]) continue;
        if(localsum+nums[i]<=target)
        {
            sub.push_back(nums[i]);
            backtrack(i+1,n,sub,nums,localsum+nums[i],target);
            sub.pop_back();
        }
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<int> sub;
        int localsum=0;
        backtrack(0,n,sub,candidates,localsum,target);
        
        return ans;
    }
};
