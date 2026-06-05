class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        string sorted="";
        for(auto x: strs){
                sorted= x;
                sort(x.begin(),x.end());
            m[x].push_back(sorted);
        }
        vector<vector<string>> v;
        for(auto y: m){
            v.push_back(y.second);
        }
        return v;
    }
};
