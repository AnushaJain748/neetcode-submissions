class Solution {
public:
    bool canJump(vector<int>& nums) {
        // code using greedy approach- time complexity- o(n)
        // if(nums.size()==1)
        // return true;
        int farthest=0;
        int curind=0;
        int maxsum=0;
        int jump=0;
        for(int i=0;i<nums.size();i++){
            farthest=max(farthest, i+nums[i]);
            if(i==curind){
                        jump+=1;
                        curind=farthest;
            }
            if(curind>=nums.size()-1)
            return true;
        }
        return false;
    }
};
