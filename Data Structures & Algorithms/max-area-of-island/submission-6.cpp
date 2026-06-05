class Solution {
public:
int result=0;
int dfs(int x,int y,vector<vector<int>>& grid,vector<vector<int>>& vis,int m,int n,int curr)
{
    int ans=1;
    vis[x][y]=1;
    int row[4] ={0,-1,0,1};
    int col[4] ={1,0,-1,0};
    for(int i=0;i<4;i++){
        int r=x+row[i];
        int c=y+col[i];
        if(r>=0 && r<m && c>=0 && c<n && vis[r][c]==0 && grid[r][c]==1)
        ans+=dfs(r,c,grid,vis,m,n,curr+1);
    }
return ans;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]==0)
                result=max(result,dfs(i,j,grid,vis,m,n,1));
            }
        }
    return result;
    }
};
