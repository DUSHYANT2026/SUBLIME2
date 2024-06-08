#include<bits/stdc++.h>
using namespace std;
void priorityqueue(priority_queue<int> ps){
while(!ps.empty()){
cout<<ps.top()<<" ";
ps.pop();}}
int main(){
priority_queue<int> p;
int n,x;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
p.push(x);}
cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE:"<<endl;
priorityqueue(p);
cout<<endl;
cout<<"LARGEST ELEMENT IN THE HEAP IS THE FIRST ELEMENT: "<<p.top()<<endl;
cout<<"TO FIND THE SIZE OF THE HEAP: "<<p.size()<<endl;
if(p.empty())
cout<<"HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
else
cout<<"THERE ARE ELEMENT IN THE HEAP: "<<endl;
for(int i=0;i<n;i++){
p.pop();}
if(p.empty())
cout<<"HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
else
cout<<"THERE ARE ELEMENT IN THE HEAP: "<<endl;
for(int i=1;i<=100;i++){
if(i%5==0)
p.push(i);}
cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
priorityqueue(p);
cout<<endl;
cout<<"TO FIND THE SIZE OF THE HEAP: "<<p.size()<<endl;
p.emplace(7988);
p.emplace(69);
p.emplace(4);
cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
priorityqueue(p);
return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// void priorityqueueminheap(priority_queue<int,vector<int>,greater<int>> ps){
// while(!ps.empty()){
// cout<<ps.top()<<" ";
// ps.pop();}}
// int main(){
// priority_queue<int,vector<int>,greater<int>> p;
// int n,x;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>x;
// p.push(x);}
// cout<<"PRINT THE MIN HEAP OR PRIORITYQUEUE:"<<endl;
// priorityqueueminheap(p);
// cout<<endl;
// cout<<"SMALLEST ELEMENT IN THE MIN HEAP IS THE FIRST ELEMENT: "<<p.top()<<endl;
// cout<<"TO FIND THE SIZE OF THE MIN HEAP: "<<p.size()<<endl;
// if(p.empty())
// cout<<"MIN HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE MIN HEAP: "<<endl;
// for(int i=0;i<n;i++){
// p.pop();}
// if(p.empty())
// cout<<"MIN HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE MIN HEAP: "<<endl;
// for(int i=1;i<=100;i++){
// if(i%5==0)
// p.push(i);}
// cout<<"PRINT THE MIN HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueueminheap(p);
// cout<<endl;
// cout<<"TO FIND THE SIZE OF THE MIN HEAP: "<<p.size()<<endl;
// return 0;}



