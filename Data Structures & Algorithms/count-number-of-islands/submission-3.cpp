class Solution {
public:
void dfs(int i,int j,vector<vector<char>>& grid,vector<vector<int>>& vis,int m,int n){

    vis[i][j]==1;
    grid[i][j]='0';
    int row[4]={-1,0,1,0};
    int col[4]={0,1,0,-1};
    for(int k=0;k<4;k++){
        int c=i+row[k];
        int d=j+col[k];
        if(c>=0 && c<m && d>=0 && d<n && grid[c][d]=='1' && vis[c][d]==0)
        dfs(c,d,grid,vis,m,n);
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1')
                {
                    ans+=1;
                    dfs(i,j,grid,vis,m,n);
                }
            }
        }
        return ans;
    }
};
