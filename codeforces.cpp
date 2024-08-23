// #include<iostream>
// using namespace std;
// int main(){
//     int n,a,b,c;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//     cin>>a>>b>>c;
//     if(a+b == c) cout<<"YES\n";
//     else if(b+c == a) cout<<"YES\n";
//     else if(c+a == b) cout<<"YES\n";
//     else cout<<"NO\n";
// }
// return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){
// string s,t;
// cin>>s>>t;

// int st=0;
// int e=s.size()-1;
// while(st<e){
//     char temp = s[st];
//     s[st] = s[e];
//     s[e] = temp;
//     st++; e--;
// }
// if(s == t) cout<<"YES";
// else cout<<"NO";
// }




// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     long long k , n ;
  
//     cin>>n>>k;
//         if(k<=(n+1)/2)
//             cout<<2*k-1;
            
//         else
//             cout<<2*(k-(n+1)/2);
//       return 0;
// }



// #include<iostream>
// using namespace std;
// string stringnumber(string &s,int n){
//     string ans="";
// if(s.length()>10){
//         ans.push_back(s[0]);
//         ans.append(to_string(s.length()-2));
//         ans.push_back(s[s.length()-1]);  
//     }
//     return ans;
// }
// int main(){
//     int n;
//     string s;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cin>>s;
//         if(s.length()>10){
//             cout<<stringnumber(s,n)<<endl;
//         }
//         else{
//             cout<<s<<endl;
//         }
//     }
// return 0; 
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
    
//     for(int i=0; i<n; i++){
//         vector<int> nums(3); 
//         for(int j=0; j<3; j++){
//             cin>>nums[j];
//         }
        
//         int sum = 0;
//         for(int j=0; j<3; j++){
//             sum += nums[j];
//         }
        
//         if(sum >= 2){ 
//             count++;
//         }
//     }
    
//     cout<<count<<endl;
//     return 0; 
// }






// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> nums;

//     while(n!=0){
//         nums.push_back(n%10);
//         n=n/10;
//     }

//     bool flage=true;
//     int count = 0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i] != 4 && nums[i] != 7){
//             flage=false;
//             break;
//         }
//         else{
//             count++;
//         }
//     }

//     if(flage && (count == 4 || count == 7)){
//         cout<<"YES";
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0; 
// }




// #include <iostream>
// using namespace std;

// int countLuckyDigits(long long n) {
//     int count = 0;
//     while (n > 0) {
//         int digit = n % 10;
//         if (digit == 4 || digit == 7) {
//             count++;
//         }
//         n /= 10;
//     }
//     return count;
// }

// int main() {
//     long long n;
//     cin >> n;

//     int luckyDigitCount = countLuckyDigits(n);

//     if (luckyDigitCount == 4 || luckyDigitCount == 7 || luckyDigitCount == 44 || luckyDigitCount == 47 || luckyDigitCount == 74 || luckyDigitCount == 77) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


// #include<iostream>
// #include<string>
// #include<set>
// using namespace std;
// int main(){
//     string st;
//     cin>>st;

//     set<char>s;
//     for(auto it : st){
//         s.insert(it);
//     }
//     if(s.size()%2 == 0){
//         cout<<"CHAT WITH HER!";
//     }
//     else{
//         cout<<"IGNORE HIM!";
//     }
//     return 0;
// }





// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main(){

//     int t; cin>>t;
//     while(t--){
//     int n, x;
//     cin >> n;

//     vector<int> nums;
//     for(int i = 0; i < n; i++){
//         cin >> x;
//         nums.push_back(x);
//     }

//     int ans = INT_MIN;
//     for(int i=0;i<n;i++){
//         nums[i]++;
//         int product = 1;
//         for(auto it : nums){
//             product *= it;
//         }
//         ans =  max(ans,product);
//         nums[i]--;
//     }

//     cout << ans <<endl;
//     }
//     return 0;
// }




// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     while(n--){
//         string s;
//         cin>>s;
//         if(s == "abc" || s == "acb" || s == "bac" || s == "cba"){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }










// #include<bits/stdc++.h>
// using namespace std;
//     int GCGHCD2(int n, int m) {
//         while (n > 0 && m > 0) {
//             if (n > m) {
//                 n = n % m;
//             } else {
//                 m = m % n;
//             }
//         }
//         if (n == 0) return m;
//         return n;
//     }
//     int functioncheck(int n,vector<int> &nums){
//         vector<int> newnums;

//         for(int i=0; i<n; i++){
//             int maxi = INT_MIN;
//             for(int j=0; j<i; j++){
//                 maxi = max(maxi,nums[j]);
//             }
//             newnums.push_back(GCGHCD2(nums[i],maxi));
//         }

//         sort(newnums.begin(),newnums.end());

//         vector<pair<int,int>> v;

//         int x = newnums.size();

//         for(int i=0; i<x/2; i++){
//             v.push_back({newnums[i],newnums[x-1-i]});
//         }

//         int ans = 0;

//         for(auto  it : v){
//             ans += GCGHCD2(it.first,it.second);
//         }
//         return ans;
//     }
// int main(){
//     int n,x;
//     cin>>n;
//     vector<int> nums;

//     for(int i=0; i<n; i++){
//         cin>>x;
//         nums.push_back(x);
//     }
//     cout<<functioncheck(n,nums);

//     return 0; 
// }
