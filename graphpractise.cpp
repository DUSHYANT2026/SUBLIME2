// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     void dfscheck(int node, vector<int> &ans, vector<int> &vis,vector<int> graph[]){
//         vis[node] = 1;
//         ans.push_back(node);
        
//         for(auto it : graph[node]){
//             if(!vis[it]){
//                 dfscheck(it,ans,vis,graph);
//             }
//         }
//     }
//   public:
//     vector<int> dfs(vector<vector<int>>& adj) {
//         int n = adj.size();
//         vector<int> graph[n];
//         for(int i=0; i<n; i++){
//             for(auto it : adj[i]){
//                 graph[i].push_back(it);
//             }
//         }
//         vector<int> vis(n,0);
//         vector<int> ans;
//         for(int i=0; i<n; i++){
//             if(!vis[i]){
//                 dfscheck(i,ans,vis,graph);
//             }
//         }
//         return ans;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     cin.ignore();
//     while (tc--) {
//         int V;
//         cin >> V;
//         cin.ignore();
//         vector<vector<int>> adj(V); // Use vector of vectors instead of array of vectors.

//         for (int i = 0; i < V; i++) {
//             string input;
//             getline(cin, input);
//             int num;
//             vector<int> node;
//             stringstream ss(input);
//             while (ss >> num) {
//                 node.push_back(num);
//             }
//             adj[i] = node;
//         }

//         Solution obj;
//         vector<int> ans = obj.dfs(adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         cout << "~" << endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     void dfscheck(int parent, int start, int destination,int &ans ,vector<int> graph[]){
//         if(start == destination){
//             ans++;
//         }
//         if(start == parent) return;
//         for(auto it : graph[start]){
//             dfscheck(start,it,destination,ans,graph);
//         }
//     }
//   public:
//     int possible_paths(vector<vector<int>> &edges, int n, int start, int destination) {
//         int ans = 0;
//         vector<int> graph[n];
//         for(auto it : edges){
//             graph[it[0]].push_back(it[1]);
//         }
//         dfscheck(-1,start,destination,ans,graph);
//         return ans;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n, m, s, d;
//         cin >> n >> m >> s >> d;
//         vector<vector<int>> edges;
//         for (int i = 0; i < m; i++) {
//             int u, v;
//             cin >> u >> v;
//             edges.push_back({u, v});
//         }
//         Solution obj;
//         int ans = obj.possible_paths(edges, n, s, d);
//         cout << ans << "\n";

//         cout << "~"
//              << "\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void dfs(int current, int destination, int& ans, vector<int>& vis, vector<int> graph[]) {
        if (current == destination) {
            ans++;
            return;
        }
        vis[current] = 1;
        for (auto neighbor : graph[current]) {
            if (!vis[neighbor]) {
                dfs(neighbor, destination, ans, vis, graph);
            }
        }
        vis[current] = 0; // Another method using Backtracking same as the above question
    }

public:
    int possible_paths(vector<vector<int>>& edges, int n, int start, int destination) {
        int ans = 0;
        vector<int> graph[n];
        for (auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
        }
        vector<int> vis(n, 0);
        dfs(start, destination, ans, vis, graph);
        return ans;
    }
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, s, d;
        cin >> n >> m >> s >> d;
        vector<vector<int>> edges;
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        int ans = obj.possible_paths(edges, n, s, d);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}