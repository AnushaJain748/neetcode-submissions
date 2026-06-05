class Solution {
public:
int ans=0;
int maxans=0;
int gg(int start,int buy,vector<int>& prices, int n){
    if(start>=n)
    return 0;
    int ans=0;
    if(buy==1)
    ans=max(-prices[start]+gg(start+1,0,prices,n),0+gg(start+1,1,prices,n));
    else
    ans=max(prices[start]+gg(start+2,1,prices,n),0+gg(start+1,0,prices,n));
 //  maxans=max(maxans,)
 return ans;
}
    int maxProfit(vector<int>& prices) {
    //    solve using striver way       
    int n=prices.size();
    int buy=1;
    return gg(0,buy,prices, n);        
    }
};
