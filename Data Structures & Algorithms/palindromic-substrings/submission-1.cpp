class Solution {
public:
bool palindrome(int i,int j, string s,vector<vector<int>>& memo){
    if(i>=j)
    return true;
    if(memo[i][j]!=-1)
    return memo[i][j];
    return s[i]==s[j] && palindrome(i+1,j-1,s,memo);
}
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>> memo(n,vector<int>(n,-1));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(palindrome(i,j,s,memo))
                count+=1;
            }
        }
        return count;
    }
};
