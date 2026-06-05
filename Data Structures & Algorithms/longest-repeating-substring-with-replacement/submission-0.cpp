class Solution {
public:
    int characterReplacement(string s, int k) {
        // use sliding window-
        // if (total -maxfreq>k)


        int n=s.size();
        map<char,int> m;
        int maxcount=0;
        int maxfreq=0;
        int start=0;
        for(int end=0;end<n;end++){
            m[s[end]]+=1;
            maxfreq=max(maxfreq,m[s[end]]);
            if((end-start+1)-maxfreq<=k)
            maxcount=max(maxcount,end-start+1);
            while((end-start+1)-maxfreq>k){
                m[s[start]]-=1;
                start+=1;
            }
        }
return maxcount;

    }
};
