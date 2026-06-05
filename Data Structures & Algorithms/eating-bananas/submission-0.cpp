class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxLimit=*max_element(piles.begin(),piles.end());
        int left=1;
        int mid;
        int ans=maxLimit;
        while(left<=maxLimit){
            mid=(left+maxLimit)/2;
            int totalHour=0;
            for(int i=0;i<piles.size();i++){
                totalHour+=ceil(static_cast<double>(piles[i])/mid);
            }
            if(totalHour<=h)
            {
                ans=mid;
                maxLimit=mid-1;
            }
            else
            left=mid+1;

        }
        return ans;
    }
};
