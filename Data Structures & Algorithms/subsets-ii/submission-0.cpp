class Solution {
public:
vector<vector<int>> ans;
void backtrack(int start,int n,vector<int>& nums, vector<int>& sub){
    ans.push_back(sub);
    for(int i=start;i<n;i++){
        if(i>start && nums[i]==nums[i-1])
        continue;
        sub.push_back(nums[i]);
        backtrack(i+1,n,nums,sub);
        sub.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> sub;
        backtrack(0,n,nums,sub);
        return ans;
    }
};
