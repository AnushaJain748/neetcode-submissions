class Solution {
public:
    int rob(vector<int>& nums) {
        // either i can choose the first element and not last element
        // or i can choose vice versa
        int n=nums.size();
        if(n==1)
        return nums[n-1];
        vector<int> dpOne(n-1,0);
        vector<int> dpTwo(n-1,0);
        dpOne[0]=nums[0];
        dpOne[1]=max(nums[0],nums[1]);
        dpTwo[n-1]=nums[n-1];
        dpTwo[n-2]=max(nums[n-1],nums[n-2]);
        for(int i=2;i<n-1;i++){
            dpOne[i]=max(dpOne[i-1],dpOne[i-2]+nums[i]);
        }
         for(int i=n-3;i>0;i--){
            dpTwo[i]=max(dpTwo[i+1],dpTwo[i+2]+nums[i]);
        }
        return max(*max_element(dpOne.begin(),dpOne.end()), *max_element(dpTwo.begin(),dpTwo.end()));
    }
};
