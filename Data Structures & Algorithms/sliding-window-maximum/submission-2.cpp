class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> d;
        int start=0;
        for(int i=0;i<nums.size();i++){
            if(!d.empty() && d.front()<start)
            d.pop_front();
            while(!d.empty() && nums[d.back()]<=nums[i])
            {
                d.pop_back();
            }
             d.push_back(i);
            if(i-start+1==k)
           { ans.push_back(nums[d.front()]);
           start+=1;
           }
        }
return ans;
    }
};
