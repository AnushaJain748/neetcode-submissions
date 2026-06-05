class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> s;
       for(int i=0;i<tokens.size();i++){
        if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
       {
        if(s.size()>=2){
            int x=s.top();
            s.pop();
            int y=s.top();
            s.pop();
            int ans=0;
            if(tokens[i]=="+")
            ans=x+y;
            else if(tokens[i]=="-")
            ans=y-x;
            else if(tokens[i]=="*")
            ans=x*y;
            else
            ans=y/x;
            s.push(ans);
        }

       }
        else
         s.push(stoi(tokens[i]));

       } 
       return s.top();
    }
};
