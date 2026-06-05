class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mimumumLeft[prices.size()];
        int maximumright[prices.size()];
        maximumright[prices.size()-1]=prices[prices.size()-1];
        mimumumLeft[0]=prices[0];
        int answer=0;
        for(int i=1;i<prices.size();i++){
mimumumLeft[i]=min(mimumumLeft[i-1],prices[i]);
        }
        for(int j=prices.size()-2;j>=0;j--){
            maximumright[j]=max(maximumright[j+1],prices[j]);
        }
        for(int i=0;i<prices.size();i++){
            answer=max(answer,maximumright[i]-mimumumLeft[i]);
        }
        return answer;
    }
};
