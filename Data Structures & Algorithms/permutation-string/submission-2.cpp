class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      vector<int> substring(26,0);
      for(int i=0;i<s1.size();i++){
        substring[s1[i]-'a']++;
      }
vector<int> v(26,0);
int start=0;
      for(int i=0;i<s2.size();i++){
 
            v[s2[i]-'a']+=1;
            if(v==substring)
            return true;
        while((i-start+1)>s1.size()){
            v[s2[start]-'a']-=1;
            start+=1;
            if((i-start+1)==s1.size() && v==substring)
            return true;

        }
      }
      return false;
    }
};
