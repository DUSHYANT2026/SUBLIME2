// #include<iostream>
// using namespace std;
// class Queue{
// private:
// int front;
// int rear;
// int a[6];
// public:
// Queue(){
// front=-1;
// rear=-1;
// for(int i=0;i<6;i++){
// a[i]=0;}}


// bool isempty(){
// if (front ==-1 && rear==-1)
// return true;
// else 
// return false;}

// bool isfull(){
// if ((rear+1)%6==front)
// return true;
// else 
// return false;}

// void enqueue(int value){
// if (isfull()){
// cout<<"queue is full"<<endl;
// return;}
// else if(isempty())
// {front=0;
// rear=0;
// a[rear]=value;}
// else {
// rear=(rear+1)%6;
// a[rear]=value;}}
  
// int dequeue(){
// int x;
// if(isempty()){
// cout<<"queue is empty"<<endl;
// return 0;}
// else if(front==rear){
// x=a[front];
// a[front]=0;
// front=-1;
// rear=-1;
// return x;}
// else{
// x=a[front];
// a[front]=0;
// front=(front+1)%6;
// return x;}}

// int size(){
// return (front+2);}

// void display(){
// for(int i=0;i<6;i++){
// cout<<a[i]<<" ";}}};
// int main(){
// Queue q1;
// cout<<"Adding elements in the dequeue"<<endl;
// q1.enqueue(20);	
// q1.enqueue(40);	
// q1.enqueue(60);	
// q1.enqueue(80);	
// q1.enqueue(100);
// q1.enqueue(120);
// cout<<"All the elements in the dequeue: ";		
// q1.display();	
// cout<<endl;
// cout<<"Removing and adding some elements in the deque"<<endl;
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// cout<<"Number of the elements in the deque: "<<q1.size()<<endl;
// cout<<"All the elements after removing: ";
// q1.display();
// cout<<endl;
// if(!q1.isempty())
// cout<<"Deque is not empty"<<endl;
// else
// cout<<"Deque is empty"<<endl;
// if(q1.isfull()==false)
// cout<<"Deque is not full"<<endl;
// else
// cout<<"Deque is full"<<endl;
// q1.enqueue(200);
// q1.enqueue(400);
// q1.enqueue(600);
// q1.enqueue(800);
// cout<<"All the elements after adding: ";
// q1.display();
// cout<<endl;
// if(!q1.isempty())
// cout<<"Deque is not empty"<<endl;
// else
// cout<<"Deque is empty"<<endl;
// if(q1.isfull())
// cout<<"Deque is full"<<endl;
// else
// cout<<"Deque is not full"<<endl;
// cout<<"Number of the elements in the deque: "<<q1.size()<<endl;
// return 0;}








#include<iostream>
using namespace std;
class Queue{
private:
int front;
int rear;
int a[6];
public:
Queue(){
front=-1;
rear=-1;
for(int i=0;i<6;i++){
a[i]=0;}}

bool isempty(){
if(front ==-1 && rear==-1)
return true;
else 
return false;}
bool isfull(){
if((rear+1)%6==front)
return true;
else 
return false;}

void enqueue(int value){
if(isfull()){
cout<<"queue is full"<<endl;
return;}
else if(isempty()){
front=0;
rear=0;
a[rear]=value;}
else {
rear=(rear+1)%6;
a[rear]=value;}}

int dequeue(){
int x;
if(isempty()){
cout<<"queue is empty"<<endl;
return 0;}
else if(front==rear){
x=a[front];
a[front]=0;
front=-1;
rear=-1;
return x;}
else{
x=a[front];
a[front]=0;
front=(front+1)%6;
return x;}}

int count(){
return rear+1;}

void display(){
for(int i=0;i<6;i++){
cout<<a[i]<<" ";}}};

int main(){
Queue q1;
int option,value;
do{
cout<<"\nopertion do u want to excute,select the option.enter 0 to exit"<<endl;
cout<<"1. enqueue()"<<endl;
cout<<"2. dequeue()"<<endl;
cout<<"3. is full()"<<endl;
cout<<"4. isempty()"<<endl;
cout<<"5. display()"<<endl;
cout<<"6. clear screen"<<endl;
cout<<"7. count()"<<endl<<endl;
cin>>option;
switch(option){
case 0:
break;
case 1:
cout<<"enqueue opertion \n enqueue value"<<endl;
cin>>value;
q1.enqueue(value);
break;
case 2:
cout<<"dequeue opertion \n dequeue value"<<q1.dequeue()<<endl;
break;
case 3:
if(q1.isfull())
cout<<"queue is full"<<endl;
else 
cout<<"queue is not full"<<endl;
break;
case 4:
if (q1.isempty())
cout<<"queue is empty"<<endl;
else
cout<<"queue is not empty"<<endl;
break;
case 5:
cout<<"display function is called"<<endl;
q1.display();
break;
case 6:
system("cls");
break;
case 7:
cout<<"NUMBER OF ELEMENTS IN THE QUEUE: "<<q1.count()<<endl;
break;}}
while(option!=0);
return 0;}




#include<bits/stdc++.h>
using namespace std;
void dequestl(deque<int>dq){
for(auto i=dq.begin();i!=dq.end();i++)
{cout<<*i<<" ";}
cout<<endl;}
int main(){
deque<int>dq;
int n;
cin>>n;
for(int j=0;j<n;j++){
dq.push_front(j);}
dq.push_back(20);
dq.push_back(10);
dq.push_back(50);
dq.push_back(70);
dq.push_front(40);
dq.push_front(200);
dq.push_front(100);
cout<<"All the elements in the deque: ";
dequestl(dq);
cout<<"Total numbers of the elements in the deque: "<<dq.size()<<endl;
cout<<"First element in the deque: "<<dq.front()<<endl;
cout<<"Last element in the deque: "<<dq.back()<<endl;
cout<<"Removing first element frim deque: ";
dq.pop_front();
cout<<"\nRemoving last element form the deque: ";
dq.pop_back();
cout<<"\nAll the elements after removing first and last element from the deque: ";
dequestl(dq);
cout<<"Total numbers of the elements in the deque: "<<dq.size()<<endl;
return 0;}