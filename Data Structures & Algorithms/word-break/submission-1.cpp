class Solution {
public:
int dp[100];
   int help(int start,string s,set<string> st){
    if(start==s.size())
    return 1;
    if(dp[start]!=-1)
    return dp[start];
    string temp;
    for(int i=start;i<s.size();i++){
        temp+=s[i];
        if(st.find(temp)!=st.end())
        {
            if(help(i+1,s,st))return dp[start]=1;
        }
    }
    return dp[start]=0;
   }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        for(auto word: wordDict){
            st.insert(word);
        }
        memset(dp,-1,sizeof dp);
      return  help(0,s,st);
    }
};
