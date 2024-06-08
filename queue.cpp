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
// if (rear==5)
// return true;
// else 
// return false;}

// void enqueue(int value){
// if (isfull()){
// cout<<"queue is full"<<endl;
// return ;}
// else if(isempty()){
// front=0;
// rear=0;
// a[rear]=value;}
// else {
// rear++;
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
// front++;
// return x;}}

// int count(){
// return rear+1;}

// void display(){
// for(int i=0;i<6;i++){
// cout<<a[i]<<" ";}}
// };
// int main(){
// Queue q1;
// cout<<"All the elements in the queue: ";
// q1.enqueue(100);
// q1.enqueue(200);
// q1.enqueue(300);
// q1.enqueue(400);
// q1.enqueue(500);
// q1.enqueue(600);
// q1.display();
// cout<<"\nRemoving and adding some elements fromt he queue:"<<endl;
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// if(q1.isempty())
// cout<<"Queue is empty"<<endl;
// else
// cout<<"Queue is not empty"<<endl;
// if(q1.isfull()==true)
// cout<<"Queue is full"<<endl;
// else 
// cout<<"Queue is not full"<<endl;
// q1.enqueue(700);
// q1.enqueue(800);
// q1.enqueue(900);
// q1.enqueue(1000);
// q1.enqueue(1100);
// q1.enqueue(1200);
// cout<<"All the elements in the queue after removing and adding elements: ";
// q1.display();
// cout<<endl;
// if(!q1.isempty())
// cout<<"Queue is not empty"<<endl;
// else
// cout<<"Queue is empty"<<endl;
// if(q1.isfull()==true)
// cout<<"Queue is full"<<endl;
// else 
// cout<<"Queue is not full"<<endl;
// cout<<"Number of te elements in the queue: "<<q1.count()<<endl;
// return 0;}





// #include<iostream>
// using namespace std;
// class Queue{
// private:
// int front;
// int rear;
// int *arr;
// int capacity;
// public:
// Queue(int size){
// front=-1;
// rear=-1;
// capacity=size;
// arr=new int[size];}

// bool isempty(){
// if (front ==-1 && rear==-1)
// return true;
// else 
// return false;}
// bool isfull(){
// if (rear==capacity-1)
// return true;
// else 
// return false;}

// void enqueue(int value){
// if (isfull()){
// cout<<"queue is full"<<endl;
// return ;}
// else if(isempty()){
// front=0;
// rear=0;
// arr[rear]=value;}
// else {
// rear++;
// arr[rear]=value;}}

// int dequeue(){
// int x;
// if(isempty()){
// cout<<"queue is empty"<<endl;
// return 0;}
// else if(front==rear){
// x=arr[front];
// arr[front]=0;
// front=-1;
// rear=-1;
// return x;}
// else{
// x=arr[front];
// arr[front]=0;
// front++;
// return x;}}

// int count(){
// return rear+1;}

// void display(){
// for(int i=0;i<=rear;i++){
// cout<<arr[i]<<" ";}}
// };
// int main(){
// int n,x;
// cin>>n;
// Queue q1(n);
// for(int i=0;i<n;i++){
// cin>>x;
// q1.enqueue(x);}
// cout<<"All the elements in the queue: ";
// q1.display();
// cout<<"\nRemoving and adding some elements fromt he queue:"<<endl;
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// q1.dequeue();
// if(q1.isempty())
// cout<<"Queue is empty"<<endl;
// else
// cout<<"Queue is not empty"<<endl;
// if(q1.isfull()==true)
// cout<<"Queue is full"<<endl;
// else 
// cout<<"Queue is not full"<<endl;
// q1.enqueue(700);
// q1.enqueue(800);
// q1.enqueue(900);
// q1.enqueue(1000);
// q1.enqueue(1100);
// q1.enqueue(1200);
// cout<<"All the elements in the queue after removing and adding elements: ";
// q1.display();
// cout<<endl;
// if(!q1.isempty())
// cout<<"Queue is not empty"<<endl;
// else
// cout<<"Queue is empty"<<endl;
// if(q1.isfull()==true)
// cout<<"Queue is full"<<endl;
// else 
// cout<<"Queue is not full"<<endl;
// cout<<"Number of te elements in the queue: "<<q1.count()<<endl;
// return 0;}




// #include<iostream>
// using namespace std;
// class queue{
// public:
// int *arr;
// int front;
// int rear;
// int size;
// queue(int n){
// front=-1;
// rear=-1;
// size=n;
// arr=new int[size];}

// bool isfull(){
// if(rear==size-1)
// return true;
// else
// return false;}

// bool isempty(){
// if(front==rear==-1)
// return true;
// else
// return false;}

// void enqueue(int data){
// if(isfull()){
// cout<<"YOU CAN'T ADD ITS ALREADT FULL:"<<endl;}
// else if(isempty()){
// front=0;
// rear=0;
// arr[rear]=data;}
// else{
// rear++;
// arr[rear]=data;}}

// void dequeue(){
// if(isempty()){
// cout<<"queue is empty"<<endl;
// return ;}
// else if(front==rear){
// front=-1;
// rear=-1;}
// else{
// front++;}}

// void change(int index,int data){
// arr[index]=data;
// cout<<"ELEMENT CHANGE SUCESSFULLY:"<<endl;}

// int count(){
// return rear+1;}

// int topelement(){
// if(isempty()){
// cout<<"QUEUE IS EMPTY:"<<endl;
// return -1;}
// else
// return arr[front+1];}

// void display(){
// if(isempty()){
// cout<<"QUEUE IS EMPTY:"<<endl;
// return;}
// for(int i=0;i<size;i++)
// cout<<arr[i]<<endl;
// cout<<endl;}

// };
// int main(){
// int n;
// cin>>n;
// queue s(n);
// s.enqueue(100);
// s.enqueue(200);
// s.enqueue(300);
// s.enqueue(400);
// s.enqueue(500);
// s.enqueue(600);
// s.enqueue(700);
// cout<<"SIZE OF THE QUEUE: "<<s.count()<<endl;
// s.display();
// cout<<"TOP ELEMENT IN THE QUEUE IS: "<<s.topelement()<<endl;
// return 0;}





// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class queueee{
// public:
// stack<int>s,s1;

// bool isempty(){
// if(s.top()==-1)
// return true;
// else 
// return false;}

// void enqueue(int data){
// while(!s.empty()){
// s1.push(s.top());
// s.pop();}
// s.push(data);
// while(!s1.empty()){
// s.push(s1.top());
// s1.pop();}}

// int dequeue(){
// if(s.empty()){
// cout<<"THERE IS NOTHING:"<<endl;
// return -1;}
// int data=s.top();
// s.pop();
// return data;}

// int count(){
// return s.size();}

// int topelement(){
// if(s.empty()){
// cout<<"THERE IS NOTHING IN THE QUEUE:"<<endl;
// return -1;}
// return s.top();}

// void display(){
// while(!s.empty()){
// cout<<s.top()<<endl;
// s.pop();}}

// };
// int main(){
// queueee q;
// q.enqueue(100);
// q.enqueue(200);
// q.enqueue(300);
// q.enqueue(400);
// q.enqueue(500);
// q.enqueue(600);
// q.dequeue();
// cout<<"TOP EMELMENT OF THE QUEUE: "<<q.topelement()<<endl;
// cout<<"SIZE OF THE QUEUE: "<<q.count()<<endl;
// cout<<"ALL THE ELEMENT IN THE QUEUE:"<<endl;
// q.display();
// return 0;}




// #include<bits/stdc++.h>
// using namespace std;
// void queuestl(queue<int>q1){
// while(!q1.empty()){
// cout<<q1.front()<<endl;
// q1.pop();}}
// int main(){
// queue<int>q;
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// q.push(i);
// cout<<"All the elements in the queue"<<endl;
// queuestl(q);
// cout<<"Total number of the elements in th queue: "<<q.size()<<endl;
// cout<<"First element in the queue: "<<q.front()<<endl;
// cout<<"Last element in the queue: "<<q.back()<<endl;
// cout<<"Remove the elements from the queue: "<<endl;
// q.pop();
// q.pop();
// q.pop();
// q.pop();
// cout<<"First element in the queue: "<<q.front()<<endl;
// cout<<"All element in the queue after Remove"<<endl;
// queuestl(q);
// cout<<"Adding elements in the queue: "<<endl;
// q.push(13);
// q.push(10);
// q.push(17);
// q.push(24);
// q.push(30);
// cout<<"All element in the queue after adding"<<endl;
// queuestl(q);
// cout<<"Total number of the elements in th queue: "<<q.size()<<endl;
// return 0;}