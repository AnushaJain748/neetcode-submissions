class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> ans;
        priority_queue<pair<int,int>> p;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        for(auto x:m){
            p.push({x.second,x.first});
        }
        int i=0;
        while(i<k){
            ans.push_back(p.top().second);
            p.pop();
            i+=1;
        }
return ans;

    }
};
