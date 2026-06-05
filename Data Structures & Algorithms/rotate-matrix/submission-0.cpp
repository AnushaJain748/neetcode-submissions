class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // STEP1 - REVERSE THE ROWS STEP2- TAKE TRANSPOSE (SWAPPING ROW AND COL))
    reverse(matrix.begin(),matrix.end());
    for(int i=0;i<matrix.size();i++){
        for(int j=i;j<matrix[0].size();j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    }
};
