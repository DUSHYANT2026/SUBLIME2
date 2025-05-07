// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int sum=0;
// int x=n;
// while(n>0){
// int digit=n%10;
// sum=pow(digit,3)+sum;
// n=n/10;}
// if(sum==x)
// 	cout<<x<<" is the angstrom number"<<endl;
// else
// cout<<"not a angstrom number"<<endl;
// return 0;}


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
while(n>0){
int digit=n%10;
sum=sum*10+digit;
n=n/10;}
cout<<sum<<endl;
return 0;}


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// while(n>0){
// int reverse=n%10;
// cout<<reverse ;
// n=n/10;}
// return 0;}


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=2;i<=n;i++){
// if(n%i==0){
// cout<<n<<" not a prime number"<<endl;
// break; }}
// if(i==n)
// cout<<"prime number"<<endl;
// return 0;}

 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<=n;i++){
// cin>>a[i];}
// int max=INT_MIN;
// int min=INT_MAX;
// for(int i=0;i<=n;i++){
// if(a[i]>max)
// max=a[i];
// if(a[i]<min)
// min=a[i];}
// cout<<max<<" "<<min<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int s=0;
// int e=n-1;
// while(s<e){
// swap(a[s],a[e]);
// s++;
// e--;}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}


#include<iostream>
using namespace std;
int linear(int a[],int n,int key){
for(int i=0;i<n;i++){
if(a[i]==key)
return i+1;}
return -1;}
int main(){
int n,key;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cin>>key;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
cout<<linear(a,n,key)<<endl;
return 0;}


// #include<iostream>
// using namespace std;
// int binary(int a[],int n, int key){
// int s=0;
// int e=n-1;
// while(s<e){
// int mid=(s+e)/2;
// if(a[mid]==key)
// return mid+1;
// else if(a[mid]>key)
// e=mid-1;	
// else(a[mid]<key);
// s=mid+1;}
// return -1;}
// int main(){
// int n,key;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cin>>key;
// cout<<binary(a,n,key)<<endl;
// return 0;}


// #include<iostream>
// using namespace std;
// int main(){
// int n,x,y;
// cin>>n;
// int a[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>a[i][j];}}
// cout<<"The matrix is: "<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[i][j]<<" ";}cout<<endl;}
// cout<<"Position of the element in the matrix:"<<endl;
// cin>>y;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(a[i][j]==y)
// cout<<i<<" "<<j<<endl;}}
// cout<<endl;
// cout<<"Transpose of the matrix: "<<endl;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// int temp=a[i][j];
// a[i][j]=a[j][i];
// a[j][i]=temp;}}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[j][i]<<" ";}cout<<endl;}
// cout<<"Position of the element in the transpose:"<<endl;
// cin>>x;
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// if(a[j][i]==x)
// cout<<i<<" "<<j<<endl;}}
// return 0;}


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>a[j]){
// int temp=a[i];
// a[i]=a[j];
// a[j]=temp;}}}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0; }


// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// int j=0;
// while(j<n){
// for(int i=0;i<n-j;i++){
// if(a[i]>a[i+1]){
// int temp=a[i];
// a[i]=a[i+1];
// a[i+1]=temp;}}
// j++;}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// sort(a,a+n);
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// cin>>x;
// v.push_back(x);}
// sort(v.begin(),v.end());
// for(auto j=v.begin();j!=v.end();j++){
// cout<<*j<<" ";}
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// cin>>x;	
// v.push_back(x);}
// for(auto j=0;j<v.size();j++){
// cout<<v[j]<<" ";}
// return 0;}




