/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */


    class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if (intervals.empty()) return 0;

        vector<int> start, end;
        for (auto& it : intervals) {
            start.push_back(it.start);
            end.push_back(it.end);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int rooms = 0, endPtr = 0;
        for (int i = 0; i < start.size(); i++) {
            if (start[i] < end[endPtr]) {
                rooms++;  // Need a new room
            } else {
                endPtr++; // Reuse a room
            }
        }

        return rooms;
    }
};
