class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char,int> m;
       int start=0;
       int maxlength=0;
       for(int end=0;end<s.size();end++){
        m[s[end]]+=1;
        if(m.size()==(end-start+1))
            maxlength=max(maxlength,(end-start+1));
        while(m.size()<(end-start+1)){
            m[s[start]]-=1;
            if(m[s[start]]==0)
            m.erase(s[start]);
            start+=1;
            maxlength=max(maxlength,(end-start+1));
        }
       }
       return maxlength;
    }
};
