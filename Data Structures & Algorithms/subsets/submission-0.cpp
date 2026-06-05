class Solution {
public:
 // vector<vector<int>> ans;
  
    void solve(int start, vector<int> nums, vector<vector<int>> & ans,vector<int> &v){
       // vector<int> v;
      ans.push_back(v);
        for(int i=start;i<nums.size();i++){
          if(find(v.begin(),v.end(),nums[i])==v.end())
{
    v.push_back(nums[i]);
    solve(i+1,nums,ans,v);
    v.pop_back();
}
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int start=0;
        vector<int> v;
        vector<vector<int>> ans;
        solve(start, nums,ans,v);
        return ans;
    }
};
