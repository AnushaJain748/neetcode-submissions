class Solution {
public:
bool dfs(int node, int par,vector<int>& vis, vector<int> adj[],int n){
    vis[node]=1;
    if(node==n)
    return false;
    for(int i=0;i<adj[node].size();i++){
        if(vis[adj[node][i]]==0)
        {if(dfs(adj[node][i],node,vis,adj,n))
        return true;
        }
        else
        {
            if(node!=par)
            return true;
        }
    }
}
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()!=n-1)
        return false;
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<int> vis(n,0);
        if(dfs(0,-1,vis,adj,n))
        return false;
        return true;
    }
};
