class Solution {
public:
vector<vector<string>> ans;
bool palindrome(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
void backtrack(int start,int n, string x,string s, vector<string>& sub){
    if(start==n)
   { ans.push_back(sub);
   return;
   }
    for(int i=start;i<n;i++){
            x=s.substr(start,i-start+1);
            if(palindrome(x))
           {sub.push_back(x);
            backtrack(i+1,n,"",s,sub);
            sub.pop_back();
           }

    }
     
}

    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> sub;
        string x="";
        backtrack(0,n,x,s,sub);
        return ans;
    }
};
