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
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     void dfs(int current, int destination, int& ans, vector<int>& vis, vector<int> graph[]) {
//         if (current == destination) {
//             ans++;
//             return;
//         }
//         vis[current] = 1;
//         for (auto neighbor : graph[current]) {
//             if (!vis[neighbor]) {
//                 dfs(neighbor, destination, ans, vis, graph);
//             }
//         }
//         vis[current] = 0; // Another method using Backtracking same as the above question
//     }

// public:
//     int possible_paths(vector<vector<int>>& edges, int n, int start, int destination) {
//         int ans = 0;
//         vector<int> graph[n];
//         for (auto& edge : edges) {
//             graph[edge[0]].push_back(edge[1]);
//         }
//         vector<int> vis(n, 0);
//         dfs(start, destination, ans, vis, graph);
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
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   public:
//     vector<int> bfs(vector<vector<int>> &adj) {
//         int n = adj.size();
//         vector<int> graph[n];
//         for(int i=0; i<n; i++){
//             for(auto it : adj[i]){
//                 graph[i].push_back(it);
//             }
//         }
//         vector<int> vis(n,0);
//         queue<int> q;
//         q.push(0);
//         vis[0] = 1;
//         vector<int> ans;
//         while(!q.empty()){
//             auto node = q.front(); q.pop();
//             ans.push_back(node);
//             vis[node] = 1;
//             for(auto it : graph[node]){
//                 if(!vis[it]){
//                     vis[it] = 1;
//                     q.push(it);
//                 }
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
//         // Use vector of vectors instead of array of vectors.
//         vector<vector<int>> adj(V);

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
//         vector<int> ans = obj.bfs(adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         cout << "~" << endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>                // This question is same as the number of connected components or number of provinces
// using namespace std;
// class Solution {
//   private:
//     void dfscheck(int node, vector<int> &temp, vector<int>& vis, vector<int> graph[]){
//         vis[node] = 1;
//         temp.push_back(node);
//         for(auto it : graph[node]){
//             if(!vis[it]){
//                 dfscheck(it,temp,vis,graph);
//             }
//         }
//     }
//   public:
//     vector<vector<int>> getComponents(int n, vector<vector<int>>& edges) {
//         vector<int> graph[n];
//         for(auto it : edges){
//             graph[it[0]].push_back(it[1]);
//             graph[it[1]].push_back(it[0]);
//         }
//         vector<int> vis(n,0);
//         vector<vector<int>> ans;
//         for(int i=0; i<n; i++){
//             vector<int> temp;
//             if(!vis[i]){
//                dfscheck(i,temp,vis,graph);
//                sort(temp.begin(),temp.end());
//                ans.push_back(temp);
//                temp.clear();
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
//         int V, E;
//         cin >> V >> E;
//         cin.ignore();
//         vector<vector<int>> edges;
//         for (int i = 1; i <= E; i++) {
//             int u, v;
//             cin >> u >> v;
//             edges.push_back({u, v});
//         }

//         Solution obj;
//         vector<vector<int>> res = obj.getComponents(V, edges);

//         for (int i = 0; i < res.size(); i++) {
//             sort(res[i].begin(), res[i].end());
//         }
//         sort(res.begin(), res.end());
//         for (const auto &component : res) {
//             for (int node : component) {
//                 cout << node << " ";
//             }
//             cout << endl;
//         }
//         cout << "~"
//              << "\n";
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     bool dfscheck(int node, int parent, vector<int>  &vis,vector<int> adj[]){
//         vis[node] = 1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 if(dfscheck(it,node,vis,adj)) return true;
//             }
//             else if(it != parent) return true;
//         }
//         return false;
//     }
//   public:
//     int detectCycle(int n, vector<int> adj[]) {
        
//         vector<int> vis(n,0);
        
//         // for(int i=0; i<n; i++){
//         //     if(!vis[i]){
//         //         if(dfscheck(i,0,vis,adj) == true){
//         //             return 1;
//         //         }
//         //     }
//         // }
//         // return 0;
//         for (int i = 0; i < n; i++) {
//         if (!vis[i]) {
//             queue<pair<int, int>> q;
//             q.push({i, -1});
//             vis[i] = 1;
            
//             while (!q.empty()) {
//                 int node = q.front().first; 
//                 int parent = q.front().second;
//                 q.pop();
                
//                 for (auto neighbor : adj[node]) {
//                     if (!vis[neighbor]) {
//                         vis[neighbor] = 1;
//                         q.push({neighbor, node});
//                     } else if (neighbor != parent) {
//                         return 1; 
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
//     }
// };
// int main(){
//     int tc;
//     cin >> tc;
//     while(tc--){
//         int V, E;
//         cin >> V >> E;
//         vector<int>adj[V];
//         for(int i = 0; i < E; i++){
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         int ans = obj.detectCycle(V, adj);
//         cout << ans <<"\n"; 
// cout << "~" << "\n";
// }
//     return 0;
// }






// #include <bits/stdc++.h>                   // topological order using dfs and (bfs)kahn's algorithm
// using namespace std;
// class Solution {
//   private:
//     void dfscheck(int node,vector<int> &ans, vector<int> &vis, vector<int> graph[]){
//         vis[node] = 1;
//         for(auto it : graph[node]){
//             if(!vis[it]){
//                 dfscheck(it,ans,vis,graph);
//             }
//         }
//         ans.push_back(node);
//     } 
//   public:
//     vector<int> topoSort(int n, vector<vector<int>>& edges) {
//         vector<int> graph[n];
//         for(auto it : edges){
//             graph[it[0]].push_back(it[1]);
//         }
//         // vector<int> vis(n,0);
//         // vector<int> ans;
//         // for(int i=0; i<n; i++){
//         //     if(!vis[i]){
//         //         dfscheck(i,ans,vis,graph);
//         //     }
//         // }
//         // reverse(ans.begin(),ans.end());
//         // return ans;
        
//         vector<int> indegree(n,0);
//         for(int i=0; i<n; i++){
//             for(auto it : graph[i]){
//                 indegree[it]++;
//             }
//         }
//         queue<int> q;
//         for(int i=0; i<n; i++){
//             if(indegree[i] == 0){
//                 q.push(i);
//                 indegree[i]--;
//             }
//         }
//         vector<int> ans;
//         while(!q.empty()){
//             auto it = q.front(); q.pop();
//             ans.push_back(it);
//             for(auto i : graph[it]){
//                 indegree[i]--;
//                 if(indegree[i] == 0){
//                     q.push(i);
//                 }
//             }
//         }
//         return ans;
//     }
// };

// int check(int V, vector<int> &res, vector<vector<int>> adj) {

//     if (V != res.size())
//         return 0;

//     vector<int> map(V, -1);
//     for (int i = 0; i < V; i++) {
//         map[res[i]] = i;
//     }
//     for (int i = 0; i < V; i++) {
//         for (int v : adj[i]) {
//             if (map[i] > map[v])
//                 return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int V, E;
//         cin >> V >> E;

//         int x = V;
//         vector<vector<int>> adj(V);
//         vector<vector<int>> edges;

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             edges.push_back({u, v});
//         }

//         Solution obj;
//         vector<int> res = obj.topoSort(V, edges);
//         bool ans = check(x, res, adj);
//         if (ans)
//             cout << "true\n";
//         else
//             cout << "false\n";
//         cout << "~"
//              << "\n";
//     }

//     return 0;
// }