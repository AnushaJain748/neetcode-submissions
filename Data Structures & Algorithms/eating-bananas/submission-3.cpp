class Solution {
public:
int calculate(int mid,vector<int> piles){
    int totalhour=0;
    for(int i=0;i<piles.size();i++){
        totalhour+=ceil(static_cast<double>(piles[i])/mid);
    }
    return totalhour;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       int maxele=*max_element(piles.begin(),piles.end());
    int ans=0;
       int left=1;
       int right=maxele;
       int mid=0;
       while(left<=right){
         mid=left +(right-left)/2;
        if(calculate(mid,piles)<=h)
       { 
        ans=mid;right=mid-1;
       }
        else
        left=mid+1;
       }
       return ans;
    }
};
