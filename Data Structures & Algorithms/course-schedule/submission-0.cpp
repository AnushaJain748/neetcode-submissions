class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<int> indegree(numCourses,0);
        for(int i=0;i<prerequisites.size();i++){
            indegree[prerequisites[i][1]]+=1;
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
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
        return true;
        else
        return false;
    }
};
