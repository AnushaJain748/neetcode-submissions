class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            vector<int> subVector(26,0);
            for(char c: strs[i]){
                subVector[c-'a']+=1;
            }
            m[subVector].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto c:m){
            ans.push_back(c.second);
        }
        return ans;
    }
};
