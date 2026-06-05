class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        int res=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
            if(m[nums[i]]>1){
                res=i;
                break;
            }
            
        }
        return nums[res];
    }
};
