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
// 	cin>>a[i];
// }
// int s=0;
// int e=n-1;
// while(s<e){
// swap(a[s],a[e]);
// s++;
// e--;	
// }
// for(int i=0;i<n;i++){
// 	cout<<a[i]<<" ";
// }
// return 0;
// }



#include<iostream>
using namespace std;
int total(int a, int b, int c){
	int sum=a+b+c;
	return sum;
}
int main(){
int a,b,c;
cin>>a>>b>>c;
cout<<total(a,b,c)<<endl;
return 0;
}




