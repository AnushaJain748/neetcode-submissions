class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
     int left=0;
     int right=n-1;
     int maxarea=0;
     int maxleft=height[0];
     int maxright=height[n-1];
     while(left<right){
        if(height[left]<height[right])
        {
            maxleft=max(maxleft,height[left]);
            maxarea+=(maxleft-height[left]);
                        left+=1;
        }
        else
        {
            maxright=max(maxright,height[right]);
            maxarea+=(maxright-height[right]);
            right-=1;
        }
     }
     return maxarea;
    }
};

