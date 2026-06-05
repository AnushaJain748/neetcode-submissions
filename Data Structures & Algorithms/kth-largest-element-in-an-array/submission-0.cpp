class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(auto num:nums){
            p.push(num);
        }
        int i=1;
        while(i<k){
p.pop();
i++;
        }
        return p.top();
    }
};
