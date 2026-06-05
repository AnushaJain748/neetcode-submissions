class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> m;
        for(int i=0;i<hand.size();i++){
            m[hand[i]]+=1;
        }
        if(hand.size()%groupSize!=0)
        return false;

        for(auto y:m){
            while(y.second>0)
            {
                for(int i=1;i<groupSize;i++)
                {
                    if(m[y.first+i]<=0)
                    return false;
                    m[y.first+i]--;
                }
                y.second-=1;
            }
        }
        return true;
    }
};
