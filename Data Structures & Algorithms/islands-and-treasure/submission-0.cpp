class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        // do again and rethink differnece between dijikstra and bfs
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0)
               { q.push({{i,j},1});
               vis[i][j]=1;
               }
            }
        }
        int row[4]={-1,0,1,0};
        int col[4]={0,-1,0,1};
        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int t=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int r=x+row[i];
                int c=y+col[i];
                if(r>=0 && r<m && c>=0 && c<n && grid[r][c]==2147483647 && vis[r][c]==0)
                {
                    grid[r][c]=t;
                    q.push({{r,c},t+1});
                    vis[r][c]=1;
                }
            }
        }
    }
};
