class Solution {
public:
void dfs(int x,int y,int m,int n,vector<vector<int>>& vis,vector<vector<char>>& grid ){
    vis[x][y]=1;
    if(x<0 && y<0 && x>=m && y>=n)
    return;

    int row[4]={-1,0,1,0};
    int col[4]={0,1,0,-1};
    for(int i=0;i<4;i++){
        if(x+row[i]>=0 && y+col[i]>=0 && x+row[i]<m && y+col[i]<n && grid[x+row[i]][y+col[i]]=='1' && vis[x+row[i]][y+col[i]]==0)
        dfs(x+row[i],y+col[i],m,n,vis,grid);
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1' && vis[i][j]==0)
                {
                    count+=1;
                    dfs(i,j,m,n,vis,grid);
                }
            }
        }
        return count;
    }
};
