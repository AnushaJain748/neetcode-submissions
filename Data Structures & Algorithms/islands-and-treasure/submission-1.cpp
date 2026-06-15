class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)
                q.push({{i,j},0});
            }
        }

        while(!q.empty()){
            int x=q.front().first.first;
            int y=q.front().first.second;
            int cur=q.front().second;
            q.pop();
            int row[4]={0,-1,0,1};
            int col[4]={-1,0,1,0};
            for(int i=0;i<4;i++){
                int newr=x+row[i];
                int newc=y+col[i];
                if(newr>=0 && newr<m && newc>=0 && newc<n && grid[newr][newc]!=-1 && grid[newr][newc]>cur+1)
                {
                    grid[newr][newc]=cur+1;
                    q.push({{newr,newc},grid[newr][newc]});
                }
            }
        }
    }
};
