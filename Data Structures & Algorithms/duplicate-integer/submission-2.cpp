class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
         int i;
        for( i=0;i<nums.size();i++){
            if(m[nums[i]]>0)
            break;
            m[nums[i]]++;
        }
        if(i==nums.size())
        return false;
        return true;
    }
};