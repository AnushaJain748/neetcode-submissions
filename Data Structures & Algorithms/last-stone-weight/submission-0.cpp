class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(auto stone: stones){
            p.push(stone);
        }
        while(p.size()>1){
            int stoneOne=p.top();
            p.pop();
            int stoneTwo=p.top();
            p.pop();
            if(stoneOne!=stoneTwo)
            p.push(abs(stoneOne-stoneTwo));
        }
        if(p.size()==1)
        return p.top();
        else
        return 0;
    }
};
