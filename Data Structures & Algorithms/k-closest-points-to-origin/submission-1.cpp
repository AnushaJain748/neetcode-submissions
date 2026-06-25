class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,pair<int,int>>> p;
        double dist=0;
        for(auto point:points){
            dist= sqrt(pow((point[0]),2) + pow((point[1]),2));
            p.push({dist,{point[0],point[1]}});
            if(p.size()>k)
            p.pop();
        }
  //  int i=1;
        vector<vector<int>> ans;
        while(!p.empty()){
            ans.push_back({p.top().second.first,p.top().second.second});
            p.pop();
           // i++;
        }
return ans;
    }
};
