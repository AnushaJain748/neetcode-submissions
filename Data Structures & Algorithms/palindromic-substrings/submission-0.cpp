class Solution {
public:
bool palindrome(int i,int j, string s){
    while(i<j){
        if(s[i]!=s[j])
        return false;
        i+=1;
        j-=1;
    }
    return true;
}
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>> memo(n,vector<int>(n,-1));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(palindrome(i,j,s))
                count+=1;
            }
        }
        return count;
    }
};
