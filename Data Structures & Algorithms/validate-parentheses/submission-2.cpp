class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        for(auto x:s){
            if(!t.empty() && t.top()=='[' && x==']')
            t.pop();
            else if(!t.empty() && t.top()=='(' && x==')')
            t.pop();
            else if(!t.empty() && t.top()=='{' && x=='}')
            t.pop();
            else
            t.push(x);
        }
        if(t.empty())
        return true;
        else
        return false;
    }
};
