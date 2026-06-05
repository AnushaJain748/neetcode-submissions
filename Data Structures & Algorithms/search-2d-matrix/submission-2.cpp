class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row=0;
        for(int i=1;i<matrix.size();i++){
                if(matrix[i][0]<=target)
                row=i;
                else
                break;
        }
        cout<<row;
        int left=0;
        int right=matrix[0].size()-1;
        while(left<=right){
int mid = (right +left) / 2;
            if(matrix[row][mid]==target)
            return true;
            else if(matrix[row][mid]>target)
            right=mid-1;
            else
            left=mid+1;
        }
        return false;
    }
};
