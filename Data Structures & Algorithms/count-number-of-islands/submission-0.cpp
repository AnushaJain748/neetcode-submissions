class Solution {
public:
void dfs(vector<vector<char>>& grid,int x,int y, int m,int n){
    int x_cord[]={-1,0,1,0};
    int y_cord[]={0,1,0,-1};
            if(x>=m || x<0 || y>=n || y<0 || grid[x][y]=='0')
            return;
    grid[x][y]='0';
    for(int i=0;i<4;i++){
        dfs(grid,x+x_cord[i],y+y_cord[i],m,n);
    }    
}
    int numIslands(vector<vector<char>>& grid) {
        int total=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j,m,n);
                    total+=1;
                }
            }
        }
        return total;
    }
};
