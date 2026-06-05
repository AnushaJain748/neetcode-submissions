class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        return nums[0];
        if(nums.size()==2)
        return max(nums[0],nums[1]);
        int prevprev=0;
        int prev=0;
        int profit=0;
        for(int i=0;i<nums.size();i++){
            profit=max(profit,max(prevprev+nums[i],prev));
            prevprev=prev;
            prev=profit;
        }
        return prev;
    }
};
