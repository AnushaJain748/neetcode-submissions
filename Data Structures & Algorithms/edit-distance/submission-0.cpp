class Solution {
public:
    int minDistance(string word1, string word2) {
       int s=word1.size();
       int t=word2.size();

       vector<vector<int>> dp(s+1,vector<int> (t+1,0));

       for(int i=0;i<=word1.size();i++){
        for(int j=0;j<=word2.size();j++) {
            if(i==0)
            dp[i][j]=j;
            else if(j==0)
            dp[i][j]=i;
        }
       } 

       for(int i=1;i<=word1.size();i++){
        for(int j=1;j<=word2.size();j++){
            if(word1[i-1]!=word2[j-1])
            dp[i][j]= 1+ min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
        else
        dp[i][j]=dp[i-1][j-1];
        }
       }
return dp[s][t];
    }
};
