// #include<iostream>
// using namespace std;
// void slection_sort(int n,int a[]){
// for(int i=0;i<n-1;i++){
// for(int j=i+1;j<n;j++){
// if(a[i]>a[j]){
// int temp=a[i];
// a[i]=a[j];
// a[j]=temp;}}}}
// void bubble_sort(int n,int a[]){
// int x=0;
// while(x!=n){
// for(int i=0;i<n;i++){
// if(a[i]>a[i+1]){
// int temp=a[i];
// a[i]=a[i+1];
// a[i+1]=temp;}}
// x++;}}
// void interstion_sort(int n,int a[]){
// for(int i=0;i<n;i++){
// int j=i;
// while(j>0&&a[j-1]>a[j]){
// int temp=a[j-1];
// a[j-1]=a[j];
// a[j]=temp;
// j--;}}}
// int main(){
// int n;
// cin>>n;
// int  a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING SORTION ALGORITHMS: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// bubble_sort(n,a);
// cout<<"ARRAY AFTER USING SORTING ALGORITHMS: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// for(int i=0;i<=n-1;i++){
// for(int j=i+1;j<=n;j++){
// if(a[i]>a[j]){
// int temp=a[i];
// a[i]=a[j];
// a[j]=temp;}}}
// int j=0;
// while(j!=n){
// for(int i=0;i<n;i++){
// if(a[i]>a[i+1]){	
// int temp=a[i+1];
// a[i+1]=a[i];
// a[i]=temp;}}
// j++;}
// for(int i=0;i<n;i++){
// int j=i;
// while(j!=0&&a[j-1]>a[j]){
// int temp=a[j-1];
// a[j-1]=a[j];
// a[j]=temp;
// j--;}}
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<bits/stdc++.h>
// using namespace std;
// int search(vector<int>&v,int key){
// int s=0;
// int e=v.size()-1;
// while(s<e){
// int mid=(s+e)/2;
// if(v[mid]==key){
// return mid; }
// else if(v[mid]<key){
// s=mid+1;}	
// else{
// e=mid-1;}}
// return -1;}
// int main(){
// int n;
// cin>>n;
// vector<int>v;
// for(int i=0;i<n;i++){
// int x;
// cin>>x;
// v.push_back(x);}
// int key;
// cin>>key; 
// cout<<search(v,key)<<endl;;
// return 0;}

// #include<iostream>
// using namespace std;
// void merge(int a[],int s,int m,int e){
// int i=s;
// int j=m+1;
// int k=s;
// int temp[(e-s)+1];
// while(i<=m&&j<=e){
// if(a[i]<=a[j]){
// temp[k]=a[i];
// k++; i++;}
// else{
// temp[k]=a[j];
// k++; j++;}}
// while(i<=m){
// temp[k]=a[i];
// k++;i++;}
// while(j<=e){
// temp[k]=a[j];
// k++;j++;}
// for(int x=s;x<=e;x++)
// a[x]=temp[x];}
// void mergesort(int a[],int s,int e){
// if(s<e){
// int m=(s+e)/2;
// mergesort(a,s,m);
// mergesort(a,m+1,e);
// merge(a,s,m,e);}}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING SORTING ALGORITHM : "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// int s=0;
// int e=n-1;	
// mergesort(a,s,e);
// cout<<"ARRAY AFTER USING MERGE SORT SORTING ALGORITHM : "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" "; 
// return 0;}

// #include<iostream>
// using namespace std;
// int partition(int a[],int s,int e){
// int pivot=a[e];
// int index=s;
// for(int i=s;i<=e-1;i++){
// if(a[i]<=pivot){  
// int temp=a[i];
// a[i]=a[index];
// a[index]=temp;
// index++;}}
// int temp=a[e];
// a[e]=a[index];
// a[index]=temp;
// return index;}
// void quicksort(int a[],int s,int e){
// if(s<e){
// int p=partition(a,s,e);
// quicksort(a,s,(p-1));
// quicksort(a,(p+1),e);}}
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING SORTING ALGORITHUM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// quicksort(a,0,n-1);
// cout<<"ARRAY AFTER USING QUICK SORT SORTING ALGORITHUM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}

// #include<iostream>
// using namespace std;
// void countingsort(int inputa[],int n,int r){
// int outputa[n];
// int counta[r];
// for(int i=0;i<r;i++)
// counta[i]=0;
// for(int i=0;i<n;i++)
// ++counta[inputa[i]];
// for(int i=1;i<r;i++)
// counta[i]=counta[i]+counta[i-1];
// for(int i=0;i<n;i++)
// outputa[--counta[inputa[i]]]=inputa[i];
// for(int i=0;i<n;i++)
// inputa[i]=outputa[i];}
// int main(){
// int n;
// cin>>n;
// int r=100;
// int a[n];
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING SORTING ALGORITHM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// countingsort(a,n,r);
// cout<<"ARRAY AFTER USING COUNTING SORT SORTING ALGORITHM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}




// #include<iostream>
// using namespace std;
// void heapify(int n,int a[],int i){
// int small=i;
// int left=2*i+1;
// int right=2*i+2;
// if(left<n && a[left]<a[small])
// small=left;
// if(right<n && a[right]<a[small])
// small=right;
// if(small!=i){
// swap(a[small],a[i]);
// heapify(n,a,small);}}
// void heapsort(int n,int a[]){
// for(int i=n/2-1;i>=0;i--)
// heapify(n,a,i);
// for(int i=n-1;i>0;i--){
// swap(a[0],a[i]);
// heapify(i,a,0);}}
// int main(){
// int n;
// cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
// cin>>n;
// int a[n];
// cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
// for(int i=0;i<n;i++)
// cin>>a[i];
// cout<<"ARRAY BEFORE USING MIN-HEAP SORT ALGORITHM:"<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// cout<<endl;
// heapsort(n,a);
// cout<<"ARRAY AFTER USING MIN-HEAP SORT ALGORITHM: "<<endl;
// for(int i=0;i<n;i++)
// cout<<a[i]<<" ";
// return 0;}


#include<iostream>
using namespace std;
void heapify(int n,int a[],int i){
int left=2*i+1;
int right=2*i+2;
int large=i;
if(left<n && a[left]>a[large])
large=left;
if(right<n && a[right]>a[large])
large=right;
if(large!=i){
swap(a[large],a[i]);
heapify(n,a,large);}}
void heapsort(int n,int a[]){
for(int i=n/2-1;i>=0;i--)
heapify(n,a,i);
for(int i=n-1;i>0;i--){
swap(a[0],a[i]);
heapify(i,a,0);}}
int main(){
int n;
cout<<"ENTER THE SIZE OF THE ARRAY:"<<endl;
cin>>n;
int a[n];
cout<<"ENTER THE ELEMENTS IN THE ARRAY:"<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"ARRAY BEFORE USING MAX-HEAP SORT ALGORITHM:"<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
heapsort(n,a);
cout<<"ARRAY AFTER USING MAX-HEAP SORT ALGORITHM: "<<endl;
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;}
