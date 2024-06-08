// #include<iostream>
// using namespace std;
// int main(){
// int sidea, sideb, sidec;
// cin>>sidea>>sideb>>sidec;
// if(sidea==sideb&&sideb==sidec){
// cout<<" equilateral triangle"<<endl;}
// else if(sidea==sideb||sideb==sidec||sidea==sidec){
// cout<<"isoscale triangle"<<endl;}
// else{
// cout<<"scalane triangle"<<endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n][n];
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cin>>a[i][j];}}
// for(int i=0;i<n;i++){
// for(int j=i;j<n;j++){
// int king =a[i][j];
// a[i][j]=a[j][i];
// a[j][i]=king;}}
// for(int i=0;i<n;i++){
// for(int j=0;j<n;j++){
// cout<<a[i][j]<<" ";} cout<<endl;}
// return 0;}

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int reverse=0;
// while(n!=0){
// int lastdigit=n%10;
// reverse=reverse*10+ lastdigit;
// n=n/10;}
// cout<<reverse<<endl;
// return 0;} 

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// int m;
// cin>>n>>m;
// for(int i=1;i<=n;i++){
// for(int j=1;j<=m;j++){
// if (i==1||i==n||j==1||j==m)
// cout<<"*";
// else
// cout<<" ";}cout<<endl;}
// return 0;} 

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// bool prime=true;
// for(int i=2;i<n;i++){
// if(n%i==0){
// prime=false;
// break;}}
// if (prime==true)
// cout<<"prime number"<<endl;
// else 
// cout<<"non prime number"<<endl;
// return 0;}

// #include<iostream>
// using namespace std;
// bool primenumber(int n){
// bool prime=true;
// for(int i=2;i<n;i++){
// if(n%i==0){
// prime=false;
// break;}}}
// int main(){
// int x,y;
// cin>>x>>y;
// for(int i=x;i<=y;i++){
// if(primenumber(i))
// cout<<primenumber(i)<<" ";}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=1;i<=9;++i){
// cout<<n<<"%"<<i<<"="<<n%i<<endl;} 
// return 0;}

// #include<iostream>
// using namespace std;
// void fib(int n){
// int t1=0;
// int t2=1;
// int nextterm;
// for(int i=1;i<=n;i++){
// cout<<t1<<endl;
// nextterm=t1+t2;
// t1=t2;
// t2=nextterm;}}
// int main(){
// int n;
// cin>>n;
// cout<<"FABONACCI NUMBER:"<<endl;
// fib(n);
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=0;
// do{
// cout<<i<<" KING OF KINGS"<<endl;
// i++;
// }while(i!=n);
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=n;
// do{
// cout<<i<<" KING OF KINGS"<<endl;
// i--;
// }while(i!=0);
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=0;
// while(i!=n){
// cout<<i<<" KING OF KINGS"<<endl;
// i++;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int i=n;
// while(i!=0){
// cout<<i<<" KING OF KINGS"<<endl;
// i--;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
// cout<<i<<" KING OF KINGS"<<endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// for(int i=n;i>=0;i--){
// cout<<i<<" KING OF KINGS"<<endl;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n1,n2;
// cout<<"entre 2 number :";
// cin>>n1>>n2;
// char op;
// cout<<"enter operand :";
// cin>>op;
// switch(op){
// case '+':
// cout<<n1+n2<<endl;
// break;
// case'*':
// cout<<n1*n2<<endl;
// break;}
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// char c;
// cin>>c;
// switch(c){
// case'e':
// cout<<"vowel"<<endl;
// break;
// case'a':
// cout<<"vowel"<<endl;
// break;
// case'i':
// cout<<"vowel"<<endl;\
// break;
// case'o':
// cout<<"vowel"<<endl;
// break;
// case'u':
// cout<<"vowel"<<endl;
// break;
// default:
// cout<<"consonent"<<endl;
// break;}
// return 0;}

// #include <iostream>
// using namespace std;
// int main() {
// char c;
// cin>>c;
// switch(c){
// case'a':
// cout<<"this is a vowel"<<endl;
// break;
// case'e':
// cout<<"this is a vowel"<<endl;
// break;
// case'i':
// cout<<"this is a vowel"<<endl;
// break;
// case'o':
// cout<<"this is a vowel"<<endl;
// break;
// case'u':
// cout<<"this is a vowel"<<endl;
// break;
// default:
// cout<<"this is a consonent"<<endl;}
// return 0;}

// #include<iostream>
// int fact(int n){
// int factorial=1;
// for(int i=1;i<=n;i++)
// factorial*=i;
// return factorial;}
// using namespace std;
// int main(){
// int n;
// cin>>n;
// cout<<fact(n)<<endl;
// return 0;}

// #include<iostream>
// #include<math.h>
// using namespace std;
// bool prime(int n){
// for(int i=2;i<=sqrt(n);i++){
// if (n%i==0)		
// return false;} 
// cout<<"prime number"<<endl;
// return true;}
// int main(){
// int a,b;
// cin>>a>>b;
// for(int i=a;i<=b;i++){
// if(prime(i)){
// cout<<i<<endl;}}
// return 0;}


// #include<iostream>
// using namespace std;
// int add(int n){
// int sum=0;
// for(int i=1;i<=n;i++)
// sum+=i;
// return sum;}
// int main(){
// int n;
// cin>>n;
// cout<<add(n)<<endl;
// return 0;}


// #include<iostream>
// using namespace std;
// int sum(int a,int b, int c, int d){
// int add=a+b+c+d;
// return  add;}
// int main(){
// int a,b,c,d;
// cin>>a>>b>>c>>d;
// cout<<sum(a,b,c,d)<<endl;
// return 0;}


// #include<iostream>
// #include<math.h>
// using namespace std;
// bool prime(int n){
// for(int i=2;i<=sqrt(n);i++){
// if(n%i==0){
// cout<<"Not a prime number"<<endl;
// return false;}}
// cout<<"Prime number"<<endl;
// return true; }
// int main(){
// int n;
// cin>>n;	
// if(prime(n))	
// cout<<n<<endl;
// return 0;}