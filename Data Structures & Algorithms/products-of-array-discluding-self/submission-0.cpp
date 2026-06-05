class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int left[nums.size()];
     int right[nums.size()];
     left[0]=1;
     int leftProduct=1;
     int rightProduct=1;
     right[nums.size()-1]=1;
     vector<int> ans;
     for(int i=1;i<nums.size();i++){
            leftProduct=leftProduct*nums[i-1];
            left[i]=leftProduct;
            
     }
     for(int i=nums.size()-2;i>=0;i--){
            rightProduct=rightProduct*nums[i+1];
            right[i]=rightProduct;
            //cout<<right[i];
     }
     for(int i=0;i<nums.size();i++){
        ans.push_back(left[i]*right[i]);
     }
     return ans;
    }
};
