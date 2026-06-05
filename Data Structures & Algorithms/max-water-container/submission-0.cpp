class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int left_max=heights[0];
        int right_max=heights[heights.size()-1];
        int l_ind=0;
        int r_ind=r;
        int total=0;
        while(l<r)
        {
            if(left_max<=right_max)
            {
                                total=max(total,abs(left_max)*(r-l));

                l++;
                left_max=max(left_max,heights[l]);
           //     total=max(total,abs(left_max-right_max)*(r-l));
            }
            else{
                                total=max(total,abs(right_max)*(r-l));

                r--;
                right_max=max(right_max,heights[r]);
               // total=max(total,abs(right_max-left_max)*(r-l));
            }
        
        }
        return total;
    }
};
