class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;   // fix: right boundary

        while (l <= r) {           // fix: inclusive condition
            int mid = l + (r - l) / 2;  // safer mid calculation

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return -1;
    }
};
