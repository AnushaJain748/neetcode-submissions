class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        result.push_back(intervals[0]);
        int i=1;
        while(i<intervals.size()){
            vector<int> last=result.back();
            if(last[1]<intervals[i][0])
            result.push_back(intervals[i]);
            else{
                result.pop_back();
                last[0]=min(last[0],intervals[i][0]);
                last[1]=max(last[1],intervals[i][1]);
                result.push_back(last);
            }
            i++;
        }
        return result;
    }
};
