class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
      
        int prev=0;
        int next=1;
        for(int cur=1;cur<nums.size();cur++){
            next=cur;
            while( prev>=0 && nums[prev]>nums[next]){
                int temp=nums[prev];
                nums[prev]=nums[next];
                nums[next]=temp;
                next-=1;
                prev-=1;
            }
            prev=cur;
        }
        return nums;
    }
};


//  1 2 5 10 3