class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(gas.begin(),gas.end(),0)<accumulate(cost.begin(),cost.end(),0))
        return -1;
        int ind=0;
        int totalgas=0;
        int val=0;
        while(ind<gas.size()){
            if(gas[ind]+totalgas<cost[ind])
            {
                totalgas=0;
                ind+=1;
                val=ind;
                continue;
            }
            else
            {
                totalgas+=abs(cost[ind]-gas[ind]);
                ind+=1;
            }
        }
        return val;
    }
};
