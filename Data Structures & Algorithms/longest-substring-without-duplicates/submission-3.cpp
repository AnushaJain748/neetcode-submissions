class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        //always use unordered_map-> more efficient
        unordered_map<char,int> m;
        int ans=0;
        for(int r=0;r<s.size();r++){
            m[s[r]]+=1;
            if((r-l+1)==m.size())
            {
                    ans=max(ans,r-l+1);
            }
            else if((r-l+1)>m.size()){
                while((r-l+1)>m.size()){
                    m[s[l]]-=1;
                    if(m[s[l]]==0)
                    m.erase(s[l]);
                                    l++;

                    ans=max(ans,r-l+1);
            
                }
            }
        }
        return ans;
    }
};
