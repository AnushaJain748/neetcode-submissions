class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,pair<int,int>>> q;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2)
               { q.push({0,{i,j}});
            }
        }
    }
    int maxtime=0;
    while(!q.empty()){
        int time=q.front().first;
        maxtime=max(maxtime,time);
        int x=q.front().second.first;
        int y=q.front().second.second;
        q.pop();
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        for(int i=0;i<4;i++){
            if(x+row[i]>=0 && x+row[i]<m && y+col[i]>=0 && y+col[i]<n && grid[x+row[i]][y+col[i]]==1){
                q.push({time+1,{x+row[i],y+col[i]}});
                grid[x+row[i]][y+col[i]]=2;
            }
        }
    }
int flag=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        return -1;
        else
        return maxtime;
    }
};
