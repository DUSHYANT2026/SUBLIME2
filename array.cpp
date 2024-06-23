// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF ARRAY:"<<endl;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"AFTER SORT HE ARRAY:"<<endl;
// sort(a,a+n);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// cout<<"THE LARGEST ELEMENT INT HE ARRAY:"<<endl;
// cout<<a[n-1]<<" ";
// cout<<"THE SECOND LARGEST ELEMENT IN THE ARRAY WHEN THERE IS NO DUPLICATE ELEMENTS:"<<endl;
// cout<<a[n-2]<<endl;
// cout<<"THE SECOND LARGEST ELEMENT IN THE ARRAY WHEN  THERE IS DUPLICARE ELEMENTS:"<<endl;
// for(int i=n-2;i>0;i--){
// if(a[i]!=a[n-1])
// cout<<a[i];
// break; }
// return 0; }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER YOUR ARRAY:"<<endl;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int max=INT_MIN;
// for(int i=0;i<n;i++)
// if(a[i]>max)
// max=a[i];
// cout<<"LARGEST ELEMENT IN THE ARRAY THAT YOU ENTERED:"<<endl;
// cout<<max<<endl;
// return 0;}

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// cout<<"ENTER YOUR ARRAY:"<<endl;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int max=a[0];
// int smax=INT_MIN;
// for(int i=0;i<n;i++)
// if(a[i]>max)
// max=a[i];
// cout<<"LARGEST ELEMENT IN THE ARRAY:"<<endl;
// cout<<max<<endl;
// for(int i=0;i<n;i++)
// if(a[i]>smax && a[i]!=max)
// smax=a[i];
// cout<<"SECOND LARGEST ELEMENT IN THE ARRAY THAT YOU ENTERED:"<<endl;
// cout<<smax<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// int checksort(int n, int a[]){
// for(int i=1;i<n;i++){
// if(a[i]>=a[i-1])
// return true;
// else
// return false;}
// return true;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<checksort(n,a)<<endl;
// if(checksort(n,a))
// cout<<"ARRAY THET YOU ENTERS IS SORTED"<<endl;
// else
// cout<<"ARRAY THAT YOU ENETED IS NOT SORTED:"<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// set<int> s;
// for(int i=0;i<n;i++){
// cin>>x;
// s.insert(x);}
// cout<<"ARRAY AFTER REMOVING THE DUPLICATES ELEMENTS FROME THE ARRAY:"<<endl;
// for(auto j=s.begin();j!=s.end();j++)
// cout<<*j<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int temp=a[0];
// a[0]=a[n-1];
// a[n-1]=temp;
// cout<<"CHANGE THE FIRST AND LAST ELEMENT IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int duplicate(int n,int a[]){
// int i=0;
// for(int j=0;j<n;j++){
// if(a[i]!=a[j]){
// a[i+1]=a[j];
// i++;}}
// return i;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<duplicate(n,a)<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// void twosum(int n,int a[],int key){
// for(int i=0;i<n;i++){
// for(int j=i+1;j<=n;j++){
// int sum=a[i]+a[j];
// if(sum==key){
// cout<<i<<" "<<j<<" ";}}}}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// twosum(n,a,key);
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// bool twosum(int a[],int target,int n){
// int s=0;
// int e=n-1;
// sort(a,a+n);
// while(s<e){
// int sum=a[s]+a[e];
// if(sum==target) return true;
// else if(sum>target) 
// e--;
// else 
// s++;}
// return false;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int target;
// cin>>target;
// if(twosum(a,target,n))
// cout<<"yes"<<endl;
// else 
// cout<<"no"<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// void leftrotate(int a[],int n){
// cout<<"LEFT ROTATION OF ELEMENTS IN THE ARRAY: "<<endl;
// int temp=a[0];
// for(int i=1;i<n;i++){
// a[i-1]=a[i];}
// a[n-1]=temp;}
// void rightrotate(int a[],int n){
// cout<<"RIGHT ROTAION OF ELEMENTS IN THE ARRAY: "<<endl;
// int temp=a[n-1];
// for(int i=n-1;i>0;i--){
// a[i]=a[i-1];}
// a[0]=temp;}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// leftrotate(a,n);
// cout<<endl;
// rightrotate(a,n);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void reverse(int a[],int s,int e){
// while(s<e){
// int temp=a[s];
// a[s]=a[e];
// a[e]=temp;
// s++;e--;}}
// void leftrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,0,d-1);
// reverse(a,d,n-1);
// reverse(a,0,n-1);}
// void rightrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,0,n-1);
// reverse(a,0,d-1);
// reverse(a,d,n-1);}    
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int d;
// cout<<"ENTER THE NUMBER BUy WHICH YOU WANT TO SHIFT THE ARRAY:"<<endl;
// cin>>d;
// leftrotate(a,n,d);
// cout<<endl;
// rightrotate(a,n,d);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void leftrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,a+d);
// reverse(a+d,a+n);
// reverse(a,a+n);}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int d;
// cout<<"ENTER THE NUMBER BUy WHICH YOU WANT TO SHIFT THE ARRAY:"<<endl;
// cin>>d;
// leftrotate(a,n,d);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void rightrotate(int a[],int n,int d){
// d=d%n;
// reverse(a,a+n);
// reverse(a,a+d);
// reverse(a+d,a+n);}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int d;
// cout<<"ENTER THE NUMBER BUy WHICH YOU WANT TO SHIFT THE ARRAY:"<<endl;
// cin>>d;
// rightrotate(a,n,d);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void merging(int a[],int arr[],int n,int m){
// int s1=0;
// int s2=0;
// int k=0;
// int temp[n+m];
// while(s1<=n&&s2<=m){
// if(a[s1]<arr[s2]){
// temp[k]=a[s1];
// k++;s1++;}
// else{
// temp[k]=arr[s2];
// k++;s2++;}}
// while(s1<=n){
// temp[k]=a[s1];
// k++;s1++;} 
// while(s2<=m){
// temp[k]=arr[s2];
// k++;s2++;} 
// for(int i=0;i<(n+m);i++)
// a[i]=temp[i];}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF FIRST ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// int m;
// cout<<"ENTER THE SIZE OF SECOND ARRAY:"<<endl;
// cin>>m;
// int arr[m];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY: "<<endl;
// for(int j=0;j<m;j++)
// cin>>arr[j];
// merging(a,arr,n,m);
// cout<<"ARRAY MADE BY COMBINE TWO ARRAY:"<<endl;
// for(int i=0;i<(n+m);i++)
// cout<<a[i]<<" ";
// cout<<endl;
// int key;
// cout<<"ENTER THE NUMBER THAT YOU WANT TO FIND: "<<endl;
// cin>>key;
// for(int i=0;i<(n+m);i++){
// if(a[i]==key)
// cout<<i<<" ";}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int sum=0;
// int maxsum=INT_MIN;
// for(int i=0;i<n;i++){
// sum=sum+a[i];
// maxsum=max(maxsum,sum);
// if(sum<0) sum=0;}
// cout<<"MAXIMUM SUM OF THE SUBARRAY:WITH TIME COMPLEXCITY OF 0(N)"<<endl;
// cout<<maxsum<<endl;
// return 0;} 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int maxsum=INT_MIN;
// for(int i=0;i<n;i++){
// for(int j=i;j<n;j++){
// int sum=0;
// for(int k=i;k<=j;k++){
// sum=sum+a[k];
// maxsum=max(maxsum,sum);}}}
// cout<<"MAXIMUM SUM OF THE SUBARRAY:WITH TIME COMPLEXCITY OF 0(N^3)"<<endl;
// cout<<maxsum<<endl;
// return 0;} 

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// for(int i=0;i<n;i++){
// int sum=0;
// for(int j=i+1;j<n;j++){
// sum=sum+a[j];
// if(sum==key)
// for(int s=i;s<j;s++)
// cout<<a[s]<<" "<<endl;}}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int positive=0;
// int negative=1;
// vector<int>ans(n,0);
// for(int i=0;i<n;i++){
// if(a[i]<0){
// ans[negative]=a[i];
// negative+=2;}
// else{ 
// ans[positive]=a[i];
// positive+=2;}}
// cout<<"REARRANGE THE ARRAY AT FIRST PLACE WITH POSIITIVE AND SECOND WITH NEGATICE ALTERNATIVELY:"<<endl;
// for(int i=0;i<n;i++)
// cout<<ans[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int positive=0;
// int negative=1;
// vector<int>ans(n,0);
// for(int i=0;i<n;i++){
// if(a[i]%2==0){
// ans[positive]=a[i];
// positive+=2;}
// else{ 
// ans[negative]=a[i];
// negative+=2;}}
// cout<<"REARRANGE THE ARRAY FIRST PLACE EVEN AND THEN ODD ALTERNATE:"<<endl;
// for(int i=0;i<n;i++)
// cout<<ans[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void threesum(int n,int a[],int key){
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// for(int k=j+1;k<=n;k++){
// int sum=a[i]+a[j]+a[k];
// if(sum==key)
// cout<<i<<" "<<j<<" "<<k<<endl;}}}}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// threesum(n,a,key);
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n][n];
// for(int i=1;i<=n;i++){
// for(int j=1;j<=n;j++)
// cin>>a[i][j];}
// cout<<"ROTATE THE ARRAY BY 90 DEGREE: "<<endl;
// for(int i=1;i<=n;i++){
// for(int j=n;j>=1;j--){
// cout<<a[j][i]<<" ";}cout<<endl;}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// void rotatearray(vector<vector<int>> nums){
// for(int i=0;i<nums.size();i++){
// for(int j=0;j<i;j++){
// int temp=nums[i][j];
// nums[i][j]=nums[j][i];
// nums[j][i]=temp;}}
// for(int i=0;i<nums.size();i++){
// reverse(nums[i].begin(),nums[i].end());}}
// int main(){
// vector<vector<int>> nums;
// nums={{1,2,3},{4,5,6},{7,8,9}};
// rotatearray(nums);
// for(int i=0;i<nums.size();i++){
// for(int j=0;j<nums[0].size();j++){
// cout<<nums[i][j]<<" ";}cout<<endl;}
// return 0;}

// #include<iostream>
// using namespace  std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"TO FIND THE LEADER(ALL THE ELEMENT IN THE RIGHT IS SMALLER) IN THE ARRAY: "<<endl;
// for(int i=0;i<n;i++){
// bool leader=true;
// for(int j=i+1;j<n;j++){
// if(a[j]>a[i]){
// leader=false;
// break;}}
// if(leader==true)
// cout<<a[i]<<" ";}
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ELEMENT: "<<endl;
// cin>>n;
// int a[n];
// int max1=0;
// int max2=-1;
// int max3=INT_MIN;
// cout<<"ENTER THE ELEMENTS IN THE ARAAY: "<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n;i++){
// if(a[i]>max1)
// max1=a[i];}
// for(int i=0;i<n;i++){
// if(a[i]>max2&&a[i]!=max1)
// max2=a[i];}
// for(int i=0;i<n;i++){
// if(a[i]>max3&&a[i]<max2)
// max3=a[i];}
// cout<<"THIRD LARGEST ELEMENT IN THE ARRAY: "<<max3<<endl;
// cout<<"LARGEST ELEMENT INT THE ARRAY: "<<max1<<endl;
// cout<<"SECOND LARGEST ELEMENT IN THE ARRAY: "<<max2<<endl;
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY: "<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARAAY: "<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// sort(a,a+n);
// cout<<"THIRD LARGEST ELEMENT IN THE ARRAY: "<<a[n-3]<<endl;
// cout<<"LARGEST ELEMENT INT THE ARRAY: "<<a[n-1]<<endl;
// cout<<"SECOND LARGEST ELEMENT IN THE ARRAY: "<<a[n-2]<<endl;
// return 0;}


// #include<iostream>
// using namespace std;

// int subarraysum1(int n,int a[],int key){
// int count=0;
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// int sum=0;
// for(int k=i;k<=j;k++){
// sum=sum+a[k];
// if(sum==key)
// count++;}}}
// return count;}

// int subarraysum2(int n,int a[],int key){
// int count=0;
// int sum;
// for(int i=0;i<n;i++){
// sum=0;
// for(int j=i;j<n;j++){
// sum+=a[j];
// if(sum==key)
// count++;}}
// return count;}

// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int key;
// cin>>key;
// cout<<"NUMBER OF SUBARRAY WITH SUM KEY: "<<endl;
// cout<<subarraysum2(n,a,key)<<endl;
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int subarray(vector<int>& a,int n,int key){
// int maxi=0;
// for(int i=0;i<n;i++){
// int sum=0;
// for(int j=i;j<n;j++){
// sum+=a[j];
// if(sum==key)
// maxi=max(maxi,(j-i+1));}}
// return maxi;}

// int subarray2(vector<int>& arr,int n,int k){
// int start=0, end=-1, sum=0, maxi=0;
// while(start < n){
// while((end + 1 < n)&&(sum + arr[end + 1] <= k))
// sum+=arr[++end];
// if(sum==k)
// maxi=max(maxi,(end - start + 1));
// sum -= arr[start];
// start++;}
// return maxi;}

// void moveZeroesback(vector<int>& nums){
// int n=nums.size();
// int numberofzero=0;
// for(int i=0;i<n;i++){
// numberofzero+=(nums[i]==0);}
// vector<int>ans;
// for(int i=0;i<n;i++){
// if(nums[i]!=0){
// ans.push_back(nums[i]);}}
// while(numberofzero--){
// ans.push_back(0); }
// for(int i=0;i<n;i++){
// nums[i]=ans[i];}}

// void moveZeroesfront(vector<int>& nums) {
// int n=nums.size();
// int numberofzero=0;
// for(int i=0;i<n;i++){
// numberofzero+=(nums[i]==0);}
// vector<int>ans;
// while(numberofzero--){
// ans.push_back(0); }
// for(int i=0;i<n;i++){
// if(nums[i]!=0){
// ans.push_back(nums[i]);}}
// for(int i=0;i<n;i++){
// nums[i]=ans[i];}}

// int main(){  
// int n,x;
// cout<<"ENTER SIZE OF THE VECTOR:"<<endl;
// cin>>n;
// cout<<"ENTER THE ELEMENTS IN THE VECTOR: "<<endl;
// vector<int> a;
// for(int i=0;i<n;i++){
// cin>>x;
// a.push_back(x);}
// // int key;
// // cout<<"ENTER THE KEY:"<<endl;
// // cin>>key;
// // cout<<"LONGEST SUBARRY WITH SUM EQUAL TO KEY:" <<endl;
// // cout<<subarray2(a,n,key);
// moveZeroesback(a);
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";}
// moveZeroesfront(a);
// cout<<endl;
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";}
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// void movezeroleft(vector<int> &nums){
// int n=nums.size();
// int countzero=0;
// for(int i=0;i<n;i++){
// countzero+=(nums[i]==0);}
// vector<int> ans;
// for(int i=0;i<n;i++){
// if(nums[i]!=0)
// ans.push_back(nums[i]);}
// while(countzero--){
// ans.push_back(0);}
// for(int i=0;i<n;i++)
// nums[i]=ans[i];}
// void movezeroright(vector<int> &nums){
// int n=nums.size();
// int countzero=0;
// for(int i=0;i<n;i++){
// countzero+=(nums[i]==0);}
// vector<int> ans;
// while(countzero--){
// ans.push_back(0);}
// for(int i=0;i<n;i++){
// if(nums[i]!=0)
// ans.push_back(nums[i]);}
// for(int i=0;i<n;i++)
// nums[i]=ans[i];}
// int main(){
// int n,x;
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// cin>>x;
// v.push_back(x);}
// movezeroleft(v);
// for(int i=0;i<n;i++)
// cout<<v[i]<<" ";
// cout<<endl;
// movezeroright(v);
// for(int i=0;i<n;i++)
// cout<<v[i]<<" ";
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// int subarraysum(int n,int a[],int key){
// int count=0;
// for(int i=0;i<n;i++){
// int sum=a[i];{
// if(sum==key)
// count++;}
// for(int j=i+1;j<n;j++){
// sum=sum+a[j];
// if(sum==key)
// count++;}}
// return count;}
// int main(){
// int n;
// int key;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cin>>key;
// cout<<"SUBARRAY SUM EQAUL TO K: "<<endl;
// cout<<subarraysum(n,a,key)<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n][n];
// for(int i=1;i<=n;i++){
// for(int j=1;j<=n;j++){
// cin>>a[i][j];}}
// cout<<"ROTATE A  MATRIX BY 90 DEGREE: "<<endl;
// for(int i=1;i<=n;i++){
// for(int j=n;j>=1;j--){
// cout<<a[j][i]<<" ";}cout<<endl;}
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,m;
// cin>>n>>m;
// int a[n][m];
// for(int i=0;i<n;i++){
// for(int j=0;j<m;j++){
// cin>>a[i][j];}}
// int row[n]={0};
// int col[m]={0};
// for(int i=0;i<n;i++){
// for(int j=0;j<m;j++){
// if(a[i][j]==0){
// row[i]=1;
// col[j]=1;}}}
// for(int i=0;i<n;i++){
// for(int j=0;j<m;j++){
// if(row[i]||col[j]){
// a[i][j]=0;}}}
// for(int i=0;i<n;i++){ 
// for(int j=0;j<m;j++){
// cout<<a[i][j]<<" ";}cout<<endl;}
// return 0;}







// #include<iostream>
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// private: 
// 	void dfscheck(int node,vector<int> &vis,vector<int> adj[],vector<int> &ans){
// 		vis[node]=1;
// 	    ans.push_back(node);
// 	    for(auto it : adj[node]){
// 	    	if(!vis[it]){
// 	    		dfscheck(it,vis,adj,ans);
// 	    	}
// 	    }
// 	}
// public:
//     vector<int> dfsOfGraph(int V, vector<int> adj[]) {
//     	vector<int> vis(V,0);
//     	vector<int> ans;
//     	for(int i=0;i<V;i++){
//     		if(!vis[i]){
//     			dfscheck(i,vis,adj,ans);
//     		}
//     	}
//     	return ans;
//     }
// };
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);}
//         Solution obj;
//         vector<int> ans = obj.dfsOfGraph(V, adj);
//         for (int i = 0; i < ans.size(); i++) {
//             cout << ans[i] << " ";}
//         cout << endl;}
//     return 0;}







// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
// private:
//     void dfscheck1(int node,vector<int> &vis,vector<vector<int>>& adj,stack<int> &s){
//         vis[node]=1;
//         for(auto it : adj[node]){
//             if(!vis[it]){
//                 dfscheck1(it,vis,adj,s);
//             }
//         }
//         s.push(node);
//     }
// private:
//     void dfscheck2(int node,vector<int> &vis,vector<vector<int>>& adjtrans){
//         vis[node]=1;
//         for(auto it : adjtrans[node]){
//             if(!vis[node]){
//                 dfscheck2(it,vis,adjtrans);
//             }
//         }
//     }
// public:
//     vector<int> kosaraju(int V, vector<vector<int>>& adj){
//     	vector<int> vis(V,0);
//         vector<int> ans;
//         stack<int> s;
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 dfscheck1(i,vis,adj,s);
//             }
//         }
//         vector<vector<int>> adjtrans(V);
//         for(int i=0;i<V;i++){
//             vis[i]=0;
//             for(auto it : adj[i]){
//                 adjtrans[it].push_back(i);
//             }
//         }
//         while(!s.empty()){
//             int node =s.top();
//             s.pop();
//             for(auto it : adjtrans[node]){
//                 if(!vis[it]){
//                     dfscheck2(it,vis,adjtrans);
//                     ans.push_back(node);
//                 }
//             }
//         }
//         return ans;
//     }  
// };
// int main()
// { 
//     int t;
//     cin >> t;
//     while(t--)
//     {
//     	int V, E;
//     	cin >> V >> E;
//     	vector<vector<int>> adj(V);
//     	for(int i = 0; i < E; i++)
//     	{
//     		int u, v;
//     		cin >> u >> v;
//     		adj[u].push_back(v);
//     	}
//     	Solution obj;
//         vector<int> ans =obj.kosaraju(V, adj);
//         for(int i=0;i<ans.size();i++)
//     	cout <<ans[i]<<"  "<<endl;
//     }
//     return 0;
// }







// #include<bits/stdc++.h>
// using namespace std;
// class Solution
// {
//  public:
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         pq.push({0,0});
//         vector<int> vis(V,0);
//         int sum=0;
//         while(!pq.empty()){
//             auto it=pq.top();  pq.pop();
//             int node=it.second;
//             int weight=it.first;
//             if(vis[node] == 1) continue;
//             vis[node] =1;
//             sum+=weight;
//             for(auto it: adj[node]){
//                 if(!vis[it[0]]){
//                     pq.push({it[1],it[0]});
//                 }
//             }
//         }
//         return sum;
//     }
// };
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             vector<int> t1,t2;
//             t1.push_back(v);
//             t1.push_back(w);
//             adj[u].push_back(t1);
//             t2.push_back(u);
//             t2.push_back(w);
//             adj[v].push_back(t2);
//         }   
//         Solution obj;
//      cout << obj.spanningTree(V, adj) << "\n";
//     }
//     return 0;
// }






// vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
//     int n=a.size();
//     vector<vector<int>> ans;
//     for(int i=0;i<n;i++){
//         long long sum=0;
//         vector<int> v;
//         for(int j=i;j<n;j++){
//             v.push_back(a[j]);
//             sum+=a[j];
//             if(sum == k){
//             ans.push_back(v);
//         }
//         }
//     }
//     return  ans;
// }