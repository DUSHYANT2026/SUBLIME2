// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int> v;
// for(int i=1;i<=n;i++){
// cin>>x;	
// v.push_back(x);}

// cout<<" All the elements in the vector: ";
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";
// cout<<endl;

// cout<<"Removing the last value of vector: ";
// v.pop_back();
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";

// cout<<"\nlast value in the vector:"<<v.back();

// v.insert(v.begin()+2,9);
// cout<<"\nThe elements in the vector after insert in the front: ";
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";

// v.erase(v.begin()+2);
// cout<<"\nThe elements in the vector after erase: ";
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";

// cout<<"\nFirst element in of the vector: "<<v.front();
// cout<<"\nFirst element in the vector: "<<v[0];
// cout<<"\nSecond element in the vector: "<<v[1];  
// cout<<endl;


// cout<<"ADDING OR INSERTING ELEMENT IN THE ARRAY:"<<endl;
// v.insert(v.begin()+5,7988);
// v.insert(v.begin()+2,88);
// v.insert(v.begin()+6,79);
// v.insert(v.begin()+0,13);
// cout<<"SIZE OF THE ARRAY: "<<v.size()<<endl;
// cout<<"VECTOR AFTER SOME CHANGE:"<<endl;
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";
// cout<<"\nFirst element in the vector: "<<v.front();
// cout<<"\nFirst element in the vector: "<<v[0];
// cout<<"\nSecond element in the vector: "<<v[1]; 
// cout<<"\nlast element in the vector: "<<v[v.size()-1];

// cout<<endl;
// if (v.empty())
// cout<<"\nvector is empty";
// else
// cout<<"vector is not empty";

// cout<<" /n  THE MAXIMUN ELEMENT IN THE VECTOR IS : "<<*max_element(v.begin(),v.end());
// cout<<"\nThe minimum element in the vector is: "<<*min_element(v.begin(),v.end());
// cout<<"\nThe maximum element in the vector is: "<<*max_element(v.begin(),v.end());

// cout<<"\nSORTING THE VECTOR";
// sort(v.begin(),v.end());
// int target;
// cin>>target;
// cout<<"\nTHE LOWERBOUND OF THE ELEMENT:"<<lower_bound(v.begin(),v.end(),target)-v.begin();
// cout<<"\nTHE UPPERBOUND OF THE ELEMENT:"<<upper_bound(v.begin(),v.end(),target)-v.begin();
// cout<<endl;
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";

// return 0;}






#include<iostream>
int fabonacci(int n){
	if(n<=1) return 1;
	return fabonacci(n-1)+fabonacci(n-2);
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<"fabonacci USING RECURSION:  "<<fabonacci(n)<<endl;
return  0;}

#include<iostream>
int factorial(int n){
	if(n<=1) return n;
	return n*factorial(n-1);
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<"FACTORIAL USING RECURSION:  "<<factorial(n)<<endl;
return  0;}


#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
while(n!=0){
	sum+=n%10;
	n=n/10;
}
cout<<"NUMBER INTO DIGITS AND PRINT THE SUM:  "<<sum<<endl;
return  0;}


#include<iostream>
using namespace std;
void swaping(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
int a,b;
cin>>a>>b;
cout<<"THE VALUE OF A BEFORE SWAP:"<<a<<endl;
cout<<"THE VALUE OF B BEFORE SWAP:"<<b<<endl;
cout<<"EXCHANGE TEO NUMBER USING FUNCTION CALL:"<<endl;
swaping(a,b);
cout<<"THE VALUE OF A AFTER SWAP:"<<a<<endl;
cout<<"THE VALUE OF B AFTER SWAP:"<<b<<endl;
return  0;}


#include<iostream>
int fabonacci(int n){
int first=0;
int second=1;
int sum;
for(int i=2;i<=n;i++){
	if(i<=1) return i;
	else{
		sum=first+second;
		first=second;
		second=sum;
	}
}
return second;
}
using namespace std;
int main(){
int n;
cin>>n;
cout<<"fabonacci USING ITERATIVE:  "<<fabonacci(n)<<endl;
return  0;}


#include<iostream>
#include<vector>
using namespace std;
void swaping(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
vector<int> reverseing(int n,int a[]){
	vector<int> nums;
	int s=0;
	int e=n-1;
	while(s<e){
		swaping(a[s],a[e]);
		nums.push_back(a[s]);
		s++;
		e--;
	}
	return nums;
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
vector<int> ans=reverseing(n,a);
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
return 0;}