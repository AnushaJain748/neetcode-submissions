class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int start=0;
        int longest=0;
        map<char,int> m;
        for(int end=0;end<n;end++){
            m[s[end]]+=1;
            while(m[s[end]]>1)
            {
                m[s[start]]-=1;
                if(m[s[start]]==0)
                m.erase(s[start]);
                start+=1;
            }
            longest=max(longest,end-start+1);
        
     } 
     return longest;
    }
};
