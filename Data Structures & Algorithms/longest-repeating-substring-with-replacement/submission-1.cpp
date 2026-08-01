class Solution {
public:
    int characterReplacement(string s, int k) {
       //KEY IS TO USE MAX(FREQUENCY OF MAP)

        map<char,int> m;
        int start=0;
        int n=s.size();
        int maxi=0;
        int maxLength=0;
        for(int end=0;end<n;end++){
            m[s[end]]++;
            maxi=max(maxi,m[s[end]]);
            if((end-start+1)-maxi<=k)
            maxLength=max(maxLength,end-start+1);
            while((end-start+1)-maxi>k){
                m[s[start]]--;
                start+=1;
            }
            maxLength=max(maxLength,end-start+1);
        }
        return maxLength;
       
    }
};
