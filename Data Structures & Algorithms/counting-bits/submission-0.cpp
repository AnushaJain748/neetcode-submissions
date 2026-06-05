class Solution {
public:
int find(int n){
    int res=0;
    while(n){
        n&=(n-1);
        res+=1;
    }
    return res;
}
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int x=find(i);
            ans.push_back(x);
        }
        return ans;
    }
};
