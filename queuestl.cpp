#include<bits/stdc++.h>
using namespace std;
void queuestl(queue<int>q1){
while(!q1.empty()){
cout<<q1.front()<<endl;
q1.pop();}}
int main(){
queue<int>q;
int n;
cin>>n;
for(int i=0;i<n;i++)
q.push(i);
cout<<"All the elements in the queue"<<endl;
queuestl(q);
cout<<"Total number of the elements in th queue: "<<q.size()<<endl;
cout<<"First element in the queue: "<<q.front()<<endl;
cout<<"Last element in the queue: "<<q.back()<<endl;
cout<<"Remove the elements from the queue: "<<endl;
q.pop();
q.pop();
q.pop();
q.pop();
cout<<"First element in the queue: "<<q.front()<<endl;
cout<<"All element in the queue after Remove"<<endl;
queuestl(q);
cout<<"Adding elements in the queue: "<<endl;
q.push(13);
q.push(10);
q.push(17);
q.push(24);
q.push(30);
cout<<"All element in the queue after adding"<<endl;
queuestl(q);
cout<<"Total number of the elements in th queue: "<<q.size()<<endl;
return 0;}