class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int i=1;
    sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    });
        result.push_back(intervals[0]);
        int count=0;
        while(i<intervals.size()){
            vector<int> last= result.back();
            if(intervals[i][0]<last[1])
                {
                            count+=1;
                            i+=1;
                }
                else
                {
                    result.push_back(intervals[i]);
                    i+=1;
                }
        }
        return count;
    }
};
