class Solution {
public:
vector<string> ans;
void backtrack(int start,int n,map<char,vector<char>> m,string digits,string& x){
    if(start==n)
        ans.push_back(x);
    for(int i=0;i<m[digits[start]].size();i++){
        x+=m[digits[start]][i];
        backtrack(start+1,n,m,digits,x);
        x.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        return {};
        map<char,vector<char>> m;
        m['2']={'a','b','c'};
        m['3']={'d','e','f'};
        m['4']={'g','h','i'};
        m['5']={'j','k','l'};
        m['6']={'m','n','o'};
        m['7']={'p','q','r','s'};
        m['8']={'t','u','v'};
        m['9']={'w','x','y','z'};
        int n=digits.size();
        string x="";
        backtrack(0,n,m,digits,x);
        return ans;
    }
};
