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
       vector<int> start,end;
       if(intervals.size()==0)
       return 0;

       for(int i=0;i<intervals.size();i++){
        start.push_back(intervals[i].start);
        end.push_back(intervals[i].end);
       } 
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
       int i=0;
       int j=0;
       int room=0;
       int maxRoom=0;

       while(i<start.size()){
        if(start[i]<end[j])
        {
            room+=1;
            maxRoom=max(maxRoom,room);
            i+=1;
        }
        else
        {
            room-=1;
            j++;
        }
       }
       return maxRoom;
    }
};
