class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>> p;
       map<int,int> m;
       for(int i=0;i<nums.size();i++){
        m[nums[i]]+=1;
       }

       for(auto c:m){
        p.push({c.second,c.first});
       }
vector<int> ans;
       for(int i=0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
       }
return ans;
    }
};
