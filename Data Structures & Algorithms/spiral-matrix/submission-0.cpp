class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int i=0;
        int j=0;
        int l=m-1;
        int r=n-1;
        vector<int> ans;
        while(i<=l && j<=r){
                for(int k=0;k<n;k++){
                    if(vis[i][k]==0){
                        ans.push_back(matrix[i][k]);
                        vis[i][k]=1;
                }
        }
        for(int k=0;k<m;k++){
                if(vis[k][r]==0){
                        ans.push_back(matrix[k][r]);
                        vis[k][r]=1;
                }
        }
        for(int k=n-1;k>=0;k--){
                if(vis[l][k]==0){
                        ans.push_back(matrix[l][k]);
                        vis[l][k]=1;
                }
        }
          for(int k=m-1;k>=0;k--){
                if(vis[k][j]==0){
                        ans.push_back(matrix[k][j]);
                        vis[k][j]=1;
                }
        }
        i++;
        j++;
        l--;
        r--;
        }
        return ans;
    }
};
