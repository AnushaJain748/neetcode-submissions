class Solution {
public:

     int dfs(int x,int y,int m,int n, vector<vector<int>>& memo){
        if(x==(m-1) && y==(n-1))
        return 1;
    
        if(x>=m  || y>=n )
        return 0;
            if(memo[x][y]!=-1)
        return memo[x][y];
         return memo[x][y]= dfs(x+1,y,m,n,memo)+dfs(x,y+1,m,n,memo);
    
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m,vector<int>(n,-1));
        return dfs(0,0,m,n,memo);
    }
};
