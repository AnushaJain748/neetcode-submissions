class Solution {
public:
    int trap(vector<int>& height) {
      int leftMaximum[height.size()];
        int rightMaximum[height.size()];
        leftMaximum[0]=height[0];
        rightMaximum[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++){
            leftMaximum[i]=max(leftMaximum[i-1],height[i]);
        }
        for(int i=height.size()-2;i>=0;i--){
            rightMaximum[i]=max(rightMaximum[i+1],height[i]);
        }
        int answer=0;
        for(int i=0;i<height.size();i++){
            answer+=(min(leftMaximum[i],rightMaximum[i])-height[i]);
        }
        return answer;
    }
};
