class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start=0;
        int minLength=INT_MAX;
        int total=0;
        for(int end=0;end<nums.size();end++){
            total+=nums[end];
            
            while(start<=end && total>=target){
                // if(total>=target){
                minLength=min(minLength,end-start+1);
                total-=nums[start];
                start+=1;
            }

        }
        // while(start<nums.size())
        if(minLength==INT_MAX)
        return 0;
        else
        return minLength;
    }
};



// 14   5
// 12   4
// 11   3