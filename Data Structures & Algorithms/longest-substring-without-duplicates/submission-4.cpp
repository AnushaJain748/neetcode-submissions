class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char> st;
       int maxcount=0;
       int start=0;
       for(int end=0;end<s.size();end++){
        while(st.find(s[end])!=st.end()){
            st.erase(s[start]);
            start+=1;
        }
        st.insert(s[end]);
        maxcount=max(maxcount,end-start+1);
       }
return maxcount;
    }
};
