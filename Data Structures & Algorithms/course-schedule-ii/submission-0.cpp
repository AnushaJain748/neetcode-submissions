class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            indegree[prerequisites[i][0]]+=1;
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        queue<int> q;
        vector<int> v;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0)
                {
                    q.push(i);
                }
        }
        while(!q.empty()){
            int node= q.front();
            v.push_back(node);
            q.pop();
            for(int i=0;i<adj[node].size();i++){
                indegree[adj[node][i]]-=1;
                if(indegree[adj[node][i]]==0)
                q.push(adj[node][i]);
            }
        }
        if(v.size()==numCourses)
        return v;
        else
        return {}; 
    }
};
