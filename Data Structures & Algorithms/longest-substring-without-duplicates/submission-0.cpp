class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int start=0;
        int end=0;
        int maxLength=0;
        while(end<s.size()){
            m[s[end]]+=1;
                        if(m[s[end]]>1)
            {
                while(m[s[end]]>1){
                    m[s[start]]-=1;
                    start+=1;
                    if(m[s[start]]==0)
                   { m.erase(s[start]);
                   }
                }
            }
                        maxLength=max(maxLength,end-start+1);

            end+=1;
        }
        return maxLength;
    }
};
