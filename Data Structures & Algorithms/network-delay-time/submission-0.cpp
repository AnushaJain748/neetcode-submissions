class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][2],times[i][1]});
        }
        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,k});
        dist[k]=0;
        while(!q.empty()){
            int node= q.top().second;
            int dis=q.top().first;
            q.pop();
            if(dis>dist[node]) // why to process if this new dis is higher than whats already stored for tha node
            continue;

            for(int i=0;i<adj[node].size();i++){
                if(dist[adj[node][i].second]> dist[node]+adj[node][i].first)
                {
                    dist[adj[node][i].second]=dist[node]+adj[node][i].first;
                    q.push({dist[adj[node][i].second],adj[node][i].second});
                }
            }
        }
        int maxcount=0;
        int flag=0;
        for(int i=1;i<=n;i++){
            if(dist[i]==INT_MAX)
           { flag=1;
            break;}
            maxcount=max(maxcount,dist[i]);
        }
        if(flag==1)
        return -1;
        return maxcount;
       
    }
};
