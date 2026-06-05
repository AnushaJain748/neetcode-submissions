class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
      int length=0;
      if(nums.size()==0)
      return length;
      int maxlength=1;
      unordered_set<int> s(nums.begin(),nums.end());

      for(int num: s){
        if(s.find(num-1)==s.end()){
            length=1;
            while(s.find(num+length)!=s.end()){
                length+=1;
            }
maxlength=max(maxlength,length);

        }
      }
      return maxlength;
    }
};

// 2,3,4,4,5,10,20
