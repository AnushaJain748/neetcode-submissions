class Solution {
public:
bool backtrack(vector<int>& matchsticks,int n,int targetSum,vector<int>& buckets,int index){
    if(index==n)
    {
        for(auto sum:buckets){
            if(sum!=targetSum)
            return false;
        }
        return true;
    }

    for(int i=0;i<buckets.size();i++){
        if(buckets[i]+matchsticks[index]>targetSum)
        continue;
        buckets[i]+=matchsticks[index];
        if(backtrack(matchsticks,n,targetSum,buckets,index+1))
        return true;
        buckets[i]-=matchsticks[index];

        if(buckets[i]==0)
        break; // no point checking for other buckets as if it doesnt fit in this it wont fit in others
    }
    return false;
}
    bool makesquare(vector<int>& matchsticks) {
        int totalsum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        int k=4;
        int targetsum=totalsum/k;
        int n=matchsticks.size();
        if(totalsum%k!=0)
        return false;
        sort(matchsticks.rbegin(),matchsticks.rend());
        if(matchsticks[0]>targetsum)
        return false;
        vector<int> buckets(k,0);
        return backtrack(matchsticks,n,targetsum,buckets,0);
    }
};


// k=4
