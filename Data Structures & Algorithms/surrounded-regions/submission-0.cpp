class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<char>> v=board;
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && v[i][j]=='O')
               {
                 q.push({i,j});
               }
            }
        }
        int row[4]={-1,0,1,0};
        int col[4]={0,1,0,-1};
        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            cout<<x<<y;
            v[x][y]='Y';
            
            q.pop();
            for(int i=0;i<4;i++){
                if(x+row[i]>=0 && x+row[i]<m && y+col[i]<n && y+col[i]>=0 && v[x+row[i]][y+col[i]]=='O')
                q.push({x+row[i],y+col[i]});
            }
        }
        //    for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //      //  cout<<v[i][j];
        //     }
        // }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='O')
                v[i][j]='X';
            }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<v[i][j];
                if(v[i][j]=='Y')
                v[i][j]='O';
            }
        }
        board=v;
    }
};
