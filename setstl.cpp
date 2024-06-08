// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// set<int>s;
// // set<int,greater<int> s1;
// int n,p;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>p;
// s.insert(p);}

// cout<<"All the elements in the set: ";
// for(auto j=s.begin();j!=s.end();j++)
// cout<<*j<<" ";
// cout<<endl;

// cout<<"ANOTHER METHOD TO DISPLAY THE VALUE IN THE SET:"<<endl;
// for(auto value: s){
// cout<<value<<" ";cout<<endl;}

// // cout<<"TO CHECK THAT NUMBER IS PRESENT IN THE SET:"<<endl;
// // cin>>data;
// // int x=data;
// // if (s.find(data)!=s.end())
// // cout<<x<<" :Is present in the set"<<endl;

// cout<<"Total number of elements in the set: "<<s.size()<<endl;
// s.erase(s.begin());
// s.erase(s.begin());
// s.insert(69);
// s.insert(13);
// cout<<"All the elements in the set after erase and insert: ";
// for(auto j=s.begin();j!=s.end();j++)
// cout<<*j<<" ";
// cout<<endl;
// cout<<"The minimum element in the set: "<<*min_element(s.begin(),s.end());
// cout<<"\nThe maximum element in the set: "<<*max_element(s.begin(),s.end());
// cout<<endl;
// if (s.empty()==true)
// cout<<"The set is empty"<<endl;
// else 
// cout<<"The set is not empty"<<endl;
// cout<<"AFTER CLEAR ALL THE ELEMENTS FROM THE SET"<<endl;
// s.clear();
// cout<<"Total number of elements in the set: "<<s.size()<<endl;
// if (s.empty()==true)
// cout<<"The set is empty"<<endl;
// else 
// cout<<"The set is not empty"<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// set<string>s;
// int n;
// cin>>n;
// while(n--){
// string name;
// cin>>name;
// s.insert(name);}
// cout<<"NAME THAT DO NOT REPEATED:"<<endl;
// for(auto value:s)
// cout<<value<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,m;
// cin>>n>>m;
// int sum=0;
// vector<int> v1(n);
// vector<int> v2(m);
// for(int i=0;i<n;i++)
// cin>>v1[i];
// for(int i=0;i<m;i++)
// cin>>v2[i];
// set<int>s;
// for(auto value: v1)
// s.insert(value);
// for(auto val: v2){
// if(s.find(val)!=s.end())
// sum+=val;}
// cout<<"SUM OF THE COMMON ELEMENTS IN THE TWO VECTORS: "<<sum<<endl;
// return 0;}