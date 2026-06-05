class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // use unordered_set -> time xomplexity o(n), space complexity- o(n)
    int n=nums.size();
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    int longest=0;
    for(int num:s){
        if(s.find(num-1)==s.end())
        {
            int length=1;
            while(s.find(num+length)!=s.end()){
                length+=1;
            }
            longest=max(longest,length);
        }
    }
    return longest;
    }
};
