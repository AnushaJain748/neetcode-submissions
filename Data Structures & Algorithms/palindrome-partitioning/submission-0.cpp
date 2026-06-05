class Solution {
public:
vector<vector<string>> ans;
bool palindrome(int start,int end,string& s,int n){
    while(start<end){
        if(s[end]==s[start]){
            start+=1;
            end-=1;
        }
        else{
            return false;
        }
    }
    return true;
}
void backtrack(int start,int end,int n,string x,string& s,vector<string>& sub){
    if(start>=n){
    ans.push_back(sub);
    return;}
    for(int i=start;i<n;i++){
        if(palindrome(start,i,s,n))
        {
            sub.push_back(s.substr(start,i-start+1));
            backtrack(i+1,end,n,x,s,sub);
            sub.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
       int n=s.size();
       vector<string> sub;
       string x="";
       backtrack(0,0,n,x,s,sub); 
       return ans;
    }
};
