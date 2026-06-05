class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }

        priority_queue<pair<int,int>> p;

         for (auto& kv : m) {
            p.push({kv.second, kv.first});
        }
        vector<int> v;
        for(int i=0;i<k;i++){
                v.push_back(p.top().second);
                p.pop();
        }
        return v;
    }
};
