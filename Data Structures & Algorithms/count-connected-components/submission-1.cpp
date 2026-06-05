class Solution {
public:
void dfs(int start,vector<int>& vis, vector<int> adj[],int n){
    vis[start]=1;
    // if(start==n)
    // return;
    for(int i=0;i<adj[start].size();i++){
        if(vis[adj[start][i]]==0)
        dfs(adj[start][i],vis,adj,n);
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
            vector<int> adj[n];
            for(int i=0;i<edges.size();i++){
                adj[edges[i][0]].push_back(edges[i][1]);
                adj[edges[i][1]].push_back(edges[i][0]);

            }
            vector<int> vis(n,0);
            int count=0;
            for(int i=0;i<n;i++){
                if(vis[i]==0){
                    count+=1;
                dfs(i,vis,adj,edges.size());
                }
            }
            return count;
    }
};
