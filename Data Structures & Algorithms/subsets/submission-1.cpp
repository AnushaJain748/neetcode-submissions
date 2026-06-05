class Solution {
public:
vector<vector<int>> ans;
void backtrack(int start,vector<int> nums,int n,vector<int>& sub){
ans.push_back(sub);
for(int i=start;i<n;i++){
    sub.push_back(nums[i]);
    backtrack(i+1,nums,n,sub);
    sub.pop_back();
}
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> sub;
        backtrack(0,nums,n,sub);
        return ans;
    }
};
