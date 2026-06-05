class Solution {
public:
int maximum=0;
    void dfs(vector<vector<int>>& grid,int x,int y,int m,int n,int &total){
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        if(x<0 || y<0 || x>=m || y>=n || grid[x][y]==0)
        return;
        total+=1;
        maximum=max(maximum,total);
        grid[x][y]=0;
        for(int i=0;i<4;i++){
dfs(grid,x+row[i],y+col[i],m,n,total);
        }

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int total=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
               {
                total=0;
                 dfs(grid,i,j,m,n,total);}
            }
        }
        return maximum;
    }
};
