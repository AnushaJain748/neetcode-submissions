class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //   SOLVE USING KADANCE'S ALGORITHM
    int temp=nums[0];
    int curmin=nums[0];
    int curmax=nums[0];
    int result=nums[0];
    for(int i=1;i<nums.size();i++){
        temp=curmax;
        curmax=max(nums[i],max(temp*nums[i],nums[i]*curmin));
        curmin=min(nums[i],min(temp*nums[i],nums[i]*curmin));
        result=max(result,curmax);
    }

    return result;
    }
};

// first store curmax*nums[i]
// then calculate new curmax
// then use the store OG curmax to calculate curmin
// then in final variable, store max of curmax
