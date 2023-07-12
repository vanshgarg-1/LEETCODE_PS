class Solution {
public:
    void solve(vector<int>&vis,vector<vector<int>>&graph,int i){
        vis[i]=2;
        for(auto it : graph[i]){
            if(!vis[it]){
                solve(vis,graph,it);
            }
            if(vis[it]==2)return;
        }
        vis[i]=1;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,0),v;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                solve(vis,graph,i);
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]==1)v.push_back(i);
        }
        return v;
    }
};