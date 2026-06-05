class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
int ans=0;
        for(int num: s){
            if(s.find(num-1)==s.end()){
                int length=1;
            
                while(s.find(num+length)!=s.end()){
                    length+=1;
                }

ans=max(ans,length);

            }
        }
        return ans;
    }
};
