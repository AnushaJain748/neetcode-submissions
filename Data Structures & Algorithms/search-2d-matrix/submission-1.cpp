class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> v;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        int left=0;
        int right=v.size()-1;
        int mid=0;
        while(left<=right){
            mid=left + (right-left)/2;
            if(v[mid]==target)
            {
                return true;
            }
            else if(v[mid]>target)
            right=mid-1;
            else
            left=mid+1;
        }
 return false;
    }
};
