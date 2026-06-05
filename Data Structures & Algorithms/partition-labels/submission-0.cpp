class Solution {
public:
    vector<int> partitionLabels(string s) {
        // USE TWO POINTER | REFER NEETCODE SOL
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        //last index stored
        m[s[i]]=i;
    }
    vector<int> ans;
    int end=0;
    int size=0;
    for(int i=0;i<s.size();i++){
        size+=1;
        end=max(end,m[s[i]]);

        if(i==end)
        {
                ans.push_back(size);
                size=0;
        }
    }

return ans;
    }
};
