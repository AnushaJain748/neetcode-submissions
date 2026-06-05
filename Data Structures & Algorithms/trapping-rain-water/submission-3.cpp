class Solution {
public:
    int trap(vector<int>& height) {
      int n=height.size();
      int left=0;
      int right=n-1;
      int leftmax=height[0];
      int rightmax=height[n-1];
      int ans=0;
      while(left<right){
        if(height[left]<height[right]){
            leftmax=max(leftmax,height[left]);
            ans+=((leftmax-height[left]));
            left+=1;
        }
        else{
            rightmax=max(rightmax,height[right]);
            ans+=(rightmax-height[right]);
            right-=1;
        }
      }
      return ans;
    }
};

