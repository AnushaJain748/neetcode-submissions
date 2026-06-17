class Solution {
public:

void dfs(int i,int j,int m,int n,vector<vector<char>>& board, vector<vector<int>>& vis){
    vis[i][j]=1;
    board[i][j]='Y';
    int r[4]={0,1,0,-1};
    int c[4]={-1,0,1,0};

    for(int k=0;k<4;k++){
        int x=i+r[k];
        int y=j+ c[k];
        if(x>=0 && y>=0 && x<m && y<n && board[x][y]=='O' && vis[x][y]==0 )
        {
            dfs(x,y,m,n,board,vis);
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if((i==0 || j==0 || i==m-1 || j==n-1) && board[i][j]=='O'){
                    dfs(i,j,m,n,board,vis);
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O')
                board[i][j]='X';
            }
        }
           for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='Y')
                board[i][j]='O';
            }
        }
    }
};
