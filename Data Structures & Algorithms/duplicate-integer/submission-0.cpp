class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        bool flag=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
            if(m[nums[i]]>1)
            {flag=true;
            break;
            } 
        }
        return flag;
    }
};
