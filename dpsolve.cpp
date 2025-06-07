// class Solution {
// private:
//     int dpcheck(int i, int j, int n, int m, vector<vector<int>> &dp, vector<vector<int>> &grid){
//         if(i == n-1) return grid[n-1][j];

//         if(dp[i][j] != -1) return dp[i][j];
//         int count1 = INT_MAX; int count2 = INT_MAX; int  count3 = INT_MAX;
//         if(i < n-1){
//             count1 = grid[i][j] + dpcheck(i+1,j,n,m,dp,grid);
//         }
//         if(i < n-1 && j < m-1){
//             count2 = grid[i][j] + dpcheck(i+1,j+1,n,m,dp,grid);
//         }
//         if(i < n-1 && j > 0){
//             count3 = grid[i][j] + dpcheck(i+1,j-1,n,m,dp,grid);
//         }
//         return dp[i][j] = min(count1,min(count2,count3));
//     }
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<int>> dp (n, vector<int> (m ,-1));
//         int ans = INT_MAX;
//         for(int i=0; i<m; i++){
//             ans = min(ans,dpcheck(0,i,n,m,dp,grid));
//         }
//         return ans;
//     }
// };

// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();

//         vector<vector<int>> dp(n, vector<int>(m, 0));

//         for (int j = 0; j < m; ++j) {
//             dp[n-1][j] = grid[n-1][j];
//         }
//         for (int i = n - 2; i >= 0; --i) {
//             for (int j = 0; j < m; ++j) {
//                 int down = dp[i+1][j];
//                 int downLeft = (j > 0) ? dp[i+1][j-1] : INT_MAX;
//                 int downRight = (j < m-1) ? dp[i+1][j+1] : INT_MAX;

//                 dp[i][j] = grid[i][j] + min({down, downLeft, downRight});
//             }
//         }
//         int ans = INT_MAX;
//         for (int j = 0; j < m; ++j) {
//             ans = min(ans, dp[0][j]);
//         }

//         return ans;
//     }
// };
// int main(){
//     int t ; cin>>t;
//     while(t--){
//         Solution s1;
//         vector<vector<int>> nums;
//         int n; int m; int x;
//         cin>>n>>m;

//         for(int i=0; i<n; i++){
//             vector<int> temp;
//             for(int j=0; j<m; j++){
//                 cin>>x;
//                 temp.push_back(x);
//             }
//             nums.push_back(temp);
//         }
//         cout<<s1.minFallingPathSum(nums)<<endl;
//     }
//     return 0;
// }










// #include<bits/stdc++.h>
// using namespace std;
// class Solution {
// private:
//     int mod = 1000000007;
//     int dpcheck(int i, int j, int ans, vector<vector<vector<int>>> &dp,vector<vector<int>> &grid, int k){
        
//         ans = (ans + grid[i][j])%k;
//         if(i == 0 && j == 0) return ans == 0 ? 1 : 0;
//         if(dp[i][j][ans] != -1) return dp[i][j][ans];

        
//         int count = 0; int count1 = 0;
//         if(i > 0){
//             count = dpcheck(i-1,j,ans,dp,grid,k);
//         }
//         if(j > 0){
//             count1 = dpcheck(i,j-1,ans, dp, grid,k);
//         }
//         return dp[i][j][ans] = (count+count1)%mod;
//     }
// public:
//     int numberOfPaths(vector<vector<int>>& grid, int k) {
//         int n = grid.size(); int m = grid[0].size();
//         vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k, -1)));
//         return dpcheck(n-1,m-1,0,dp,grid,k);
//     }
// };
// int main(){
//     int t ; cin>>t;
//     while(t--){
//         Solution s1;
//         vector<vector<int>> nums;
//         int n; int m; int k; int x;
//         cin>>n>>m>>k;
//         for(int i=0; i<n; i++){
//             vector<int> temp;
//             for(int j=0; j<m; j++){
//                 cin>>x;
//                 temp.push_back(x);
//             }
//             nums.push_back(temp);
//         }
//         cout<<s1.numberOfPaths(nums,k)<<endl;
//     }
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// bool beautiful(int n){
//     vector<int> nums;
//     while(n != 0){
//         nums.push_back(n%10);
//         n = n/10;
//     }
//     unordered_map<int,int> mapp;
//     for(auto it : nums) mapp[it]++;

//     for(auto it :  mapp){
//         if(it.first != it.second) return false;
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = -1;
//     for(int i = n+1; i <= INT_MAX; i++){
//         if(beautiful(i)){
//             ans = i;
//             break;
//         }
//     }
//     cout<<ans<<endl;
//     return 0;
// }



// #include <iostream>
// #include <string>
// #include <unordered_map>

// using namespace std;

// bool isBeautiful(long long num) {
//     string s = to_string(num);
//     unordered_map<char, int> digitCount;
    
//     // Count each digit's occurrences
//     for (char c : s) {
//         digitCount[c]++;
//     }
    
//     // Check if each digit's count matches its value
//     for (auto& pair : digitCount) {
//         int digit = pair.first - '0';
//         int count = pair.second;
//         if (digit != count) {
//             return false;
//         }
//     }
    
//     return true;
// }

// long long beautifulNumber(long long N) {
//     long long i = N + 1;
//     while (true) {
//         if (isBeautiful(i)) {
//             return i;
//         }
//         i++;
//     }
// }

// int main() {
//     long long N;
//     cin >> N;
//     cout << beautifulNumber(N) << endl;
//     return 0;
// }