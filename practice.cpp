#include<iostream>
using namespace std;
int linera(int a[],int n ,int key){
for(int i=0;i<n;i++){
	if (a[i]==key){
	return i+1;
	}
}return -1;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int key;
cin>>key;
cout<<linera(a,n,key)<<endl;
return 0;
}



// #include<iostream>
// using namespace std;
// int serach(int a[],int n,int key){
// int s=0;
// int e=n;
// while(s<e){
// int mid=(e+s)/2;
// if (a[mid]==key){
// 	return mid;
// }else if(a[mid]>key){
// 	e=mid-1;
// }else 
// {s=mid+1;}
// }
// return -1;
// }
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// 	cin>>a[i];}
// int key;
// cin>>key;
// 	cout<<serach(a,n,key)<<endl;
// 	return 0;

// }



// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];
// }
// for(int i=0;i<n-1;i++){
// 	for(int j=i;j<n;j++){
// 	if (a[i]>a[j]){
// 	int temp=a[j];
// 	a[j]=a[i];
// 	a[i]=temp;
// 	}
// 	}
// }
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";
// }
// cout<<endl;
// return 0;

// }



// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];
// }

// int counter=1;
// while(counter<n){
// for(int i=0;i<n-counter;i++){
// if (a[i]>a[i+1]){
// int temp=a[i];
// a[i]=a[i+1];
// a[i+1]=temp;
// }
// }counter++;
// }
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";
// }
// cout<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0;i<n;i++){
// cin>>a[i];
// }

// for (int i=1;i<n;i++){
// int temp=a[i];
// int j=i-1;
// if (a[j]>temp &&j>=0){
// 	a[j+1]=a[j];
// 	j--;
// }a[j+1]=temp;

// }
// for(int i=0;i<n;i++){
// cout<<a[i]<<" ";
// }
// cout<<endl;
// return 0;
// }



