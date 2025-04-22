// #include<iostream>
// #include<string>
// using namespace std;
// class stack{
// public:
// int top;
// int a[10];
// stack(){
// top=-1;
// for(int i=0;i<=10;i++){
// a[i]=0;}}
// bool isempty(){
// if (top==-1)
// return true;
// else 
// return false;}
// bool isfull(){
// if (top==10-1)
// return true;
// else 
// return false;}
// void push(int value){
// if (isfull()){
// cout<<"stack is over flow"<<endl;}
// else {
// top++;
// a[top]=value;}}
// int pop(){
// if(isempty()){
// return 0;}
// else {
// int popvalue=a[top];
// a[top]=0;
// top--;
// return popvalue;}}
// int count(){
// return (top+1);}
// int peek(int pos){
// if(isempty()){
// return 0;}
// else 
// return a[pos];}
// void change(int pos, int value){
// a[pos]=value;
// cout<<pos<<endl;}
// void display(){
// for(int i=10-1;i>=0;i--){
// cout<<a[i]<<endl;}}};

// int main(){
// stack s1;
// int n,x;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>x;
// s1.push(x);}
// cout<<"All the elements in the stack: "<<endl;
// s1.push(20);
// s1.push(30);
// s1.push(40);
// s1.push(50);
// s1.push(60);
// s1.display();
// cout<<"All the elements after removing and andding from the stack"<<endl;
// s1.pop();
// s1.pop();
// s1.pop();
// cout<<"All the elements after removing: "<<endl;
// s1.display();
// cout<<"All the elements after adding: "<<endl;
// s1.push(70);
// s1.push(80);
// s1.push(90);
// s1.display();
// cout<<"Number of the elements present in the stack: "<<s1.count()<<endl;
// cout<<"find element in the stack with position: "<<s1.peek(4)<<endl;
// cout<<"Change the elements with the help of position: ";
// s1.change(2,120);
// s1.display();
// cout<<"find element in the stack with position: "<<s1.peek(4)<<endl;
// if(!s1.isempty())
// cout<<"stack is not empty"<<endl;
// else
// cout<<"stack is empty"<<endl;
// if(s1.isfull()==true)
// cout<<"stack is full"<<endl;
// else 
// cout<<"stack is not full"<<endl;
// for(auto j=0;j<5;j++){
// s1.pop();}
// s1.display();
// if(!s1.isempty())
// cout<<"stack is not empty"<<endl;
// else
// cout<<"stack is empty"<<endl;
// if(s1.isfull()==true)
// cout<<"stack is full"<<endl;
// else 
// cout<<"stack is not full"<<endl;
// return 0;}


// #include<iostream>
// using namespace std;
// class stack{
// public:
// int *arr;
// int top;
// int capacity;

// stack(int size){
// top=-1;
// capacity=size;
// arr=new int[size];}

// bool isempty(){
// if(top==-1)
// return true;
// else
// return false;}

// bool isfull(){
// if(top==capacity-1)
// return true;
// else
// return false;}

// void push(int data){
// if(isfull()){
// cout<<"ARRAY IF ALREDY FULL AT CAPACITY:"<<endl;
// return ;}
// arr[++top]=data;}

// int pop(){
// if(isempty()){
// cout<<"STACK IS EMPTY THERE IS NOTHING TO REMOVE:"<<endl;
// return -1;}
// return arr[top--];}

// int peek(){
// if(isempty()){
// cout<<"STACK IS EMPTY THERE IS NOTHING TO REMOVE:"<<endl;
// return -1;}
// else
// return arr[top];}

// void change(int pos,int data){
// arr[pos]=data;}

// int count(){
// return top+1;}

// void display(){
// for(int i=top;i>=0;i--)
// cout<<arr[i]<<endl;}
// };

// int main(){
// int n,x;
// cin>>n;
// stack s(n);
// for(int i=0;i<n;i++){
// cin>>x;
// s.push(x);}
// s.display();
// cout<<"NUMBER OF ELEMENT IN THE STACK: "<<s.count()<<endl;
// cout<<"CHANGE ONE ELEMENT WITH :"<<s.change(2,30)<<endl;;
// s.display();
// return 0;}



// #include<iostream>
// using namespace std;
// class stack{
// public:
// int capacity;
// int top;
// int *arr;
// stack(int n){
// capacity=n;
// top=-1;
// arr=new int[n];}

// bool isfull(){
// return (top==capacity-1);}

// bool isempty(){
// return top==-1;}

// void push(int data){
// if(isfull()){
// cout<<" STACK IS FULL:"<<endl;
// return; }
// top++;
// arr[top]=data;}

// int pop(){
// if(isempty()){
// cout<<"STACK IS EMPTY:"<<endl;
// return -1;}
// return top--;}

// int topelement(){
// if(isempty()){
// cout<<"STACK IS EMPTY THERE IS NOTHING TO REMOVE:"<<endl;
// return -1;}
// else
// return arr[top];}

// void change(int index,int data){
// arr[index]=data;}

// void display(){
// for(int i=top;i>=0;i--)
// cout<<arr[i]<<" "<<endl;}

// int count(){
// return top+1;}

// };
// int main(){
// int n;
// cin>>n;
// stack s(n);
// s.push(100);
// s.push(400);
// s.push(500);
// s.push(200);
// s.push(700);
// s.push(900);
// s.display();
// cout<<"TOP ELEEMENT IN THE STACK:"<<s.topelement()<<endl;
// s.pop();
// s.pop();
// s.pop();
// cout<<"STACK AFTER SOME POP FUNCTION:"<<endl;
// s.display();
// cout<<"SIZE OF THE STACK: "<<s.count()<<endl;
// s.change(2,300);
// s.display();
// return 0;}

// #include<iostream>
// #include<stack>
// using namespace std;
// void display(stack<int> s){
// while(!s.empty()){
// cout<<s.top()<<endl;
// s.pop();}}
// int main(){
// stack<int> s;
// s.push(200);
// s.push(400);
// s.push(600);
// s.push(800);
// s.push(1000);
// display(s);
// cout<<"SIZE OF THE STACK: "<<s.size()<<endl;
// cout<<"TOP ELEMENT IN THE STACK: "<<s.top()<<endl;
// while(!s.empty()){
// s.pop();}
// if(s.empty())
// cout<<"THERE NOTHING IN THE STACK:"<<endl;
// else
// cout<<"THERE IS ELEMENT IN THE STACK:"<<endl;
// display(s);
// int n,x;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>x;
// s.push(x);}
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// void stackstl(stack<int> s1){
// while(!s1.empty()){
// cout<<s1.top()<<endl;
// s1.pop();}}
// int main(){
// stack<int>s;
// int n,x;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>x;
// s.push(x);}
// cout<<"All the elements in the stack"<<endl;
// stackstl(s);
// cout<<"Total numbers of the elements in stack: "<<s.size();
// cout<<"\nPop an elements in top of stack"<<endl;
// s.pop();
// s.pop();
// s.pop();
// s.pop();
// cout<<"Adding an elements in the top of stack";
// s.push(90);
// s.push(100);
// s.push(190);
// s.push(200);
// cout<<"\nThe top element in the stack: "<<s.top();
// cout<<"\nAll the elements in the stack"<<endl;
// stackstl(s);
// cout<<"Total numbers of the elements in stack: "<<s.size();
// return 0;}



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class stack1{
// public:
// queue<int>q;

// bool isempty(){
// if(q.front()==q.back()==-1)
// return true;
// else
// return false;}

// void pushs(int data){
// q.push(data);
// for(int i=0;i<q.size();i++){
// q.push(q.front());
// q.pop();}}

// int pops(){
// if(isempty()){
// cout<<"STACK IS EMPTY:"<<endl;
// return -1;}
// int n=q.front();
// q.pop();
// return n;}

// int topelement(){
// return q.front();}

// int sizeofstacK(){
// return q.size();} 

// void display(){
// while(!q.empty()){
// cout<<q.front()<<endl;
// q.pop();}}
// };
// int main(){
// stack1 s;
// s.pushs(100);
// s.pushs(500);
// s.pushs(1000);
// s.pushs(2000);
// s.pushs(4000);
// s.pushs(8000);
// s.pushs(10000);
// cout<<"FORMATION OF STACK USING QUEUE DATA STRUCTURE:"<<endl;
// cout<<"TOP ELEMENT IN THE STACK: "<<s.topelement()<<endl;
// cout<<"SIZE OF THE STACK: "<<s.sizeofstacK()<<endl;
// cout<<"ALL THE ELEMENT IN THE STACK:"<<endl;
// s.display();
// return 0;}





// #include<iostream>
// using namespace std;
// class node{
// public:
// int key;
// int data;
// node* next;
// node(){
// key=0;
// data=0;
// next==NULL;}
// node(int k,int d){
// key=k;
// data=d;;
// next=NULL;}};

// class stack{
// public:
// node* top;
// stack(){
// top=NULL;}

// bool isempty(){
// if(top==NULL)
// return true;
// else
// return false;}

// bool nodeexist(node* n){
// node* temp=top;
// bool exist=false;
// while(temp!=NULL){
// if(temp->key==n->key){
// exist=true;
// break;}
// temp=temp->next;}
// return exist;}

// void push(node* n){
// if(nodeexist(n)){
// cout<<"NODE EXIST WITH THE SAME KEY YOU ENTERED SO ENTER NODE WITH DIFFERENT KEY: "<<endl;}
// else if(isempty()){
// top=n;
// cout<<"NODE PUSHED SUCESSFULLY:"<<endl;}
// else{
// node* temp=top;
// top=n;
// n->next=temp;
// cout<<"NODE PUSHED SUCESSFULLY:"<<endl;}}

// node* pop(){
// node* temp=NULL;
// if(isempty())
// return temp;
// else{
// temp=top;
// top=top->next;}
// return temp;}

// node* peek(){
// node* temp=NULL;
// if(isempty())
// return temp;
// else
// return top;}

// int count(){
// int count=0;
// node* temp=top;
// while(temp!=NULL){
// count++;
// temp=temp->next;}
// return count;}

// void display(){
// if(isempty()){
// cout<<"STACK IS EMPTY THERE IS NO NODE: "<<endl;}
// else{
// node* temp=top;
// while(temp!=NULL){
// cout<<"("<<temp->key<<","<<temp->data<<")"<<" -> ";
// temp=temp->next;}}}

// };
// int main(){
// stack s;
// int option,key,data;

// do{
// cout<<"ENTER THE OPTION NUMBER TO EXICUTES THE STACK PROGRAM: 0. TO EXIST FORM THE PROGRAME: "<<endl;
// cout<<"1) TO PUSH()"<<endl;
// cout<<"2) TO POP()"<<endl;
// cout<<"3) TO EMPTY()"<<endl;
// cout<<"4) TO PEEK()"<<endl;
// cout<<"5) TO COUNT()"<<endl;
// cout<<"6) TO DISPLAY()"<<endl;
// cout<<"7) TO CLEAR SCREEN:"<<endl;
// cin>>option;
// node* newnode=new node();

// switch(option){
// case 0:
// break;
// case 1:
// cout<<"PUSH FUNCTION IS CALLED:"<<endl;
// cout<<"ENTER KEY FIRST AND THEN DATA SECOND: "<<endl;
// cin>>key;
// cin>>data;
// newnode->key=key;
// newnode->data=data;
// s.push(newnode);
// break;
// case 2:
// cout<<"POP FUNCTION IS CALLED:"<<endl;
// newnode=s.pop();
// cout<<"TOP OF STACK IS: (" <<newnode->key << "," << newnode->data << ")";
// delete newnode;
// cout<<endl;
// break;
// case 3:
// cout<<"EMPTY FUNCTION IS CALLED:"<<endl;
// if(s.isempty())
// cout<<"STACK IS EMPTY PLEASE ENTER NODE: "<<endl;
// else
// cout<<"STACK IS NOT EMPTY: "<<endl;
// break;e
// case 4:
// cout<<"PEEK FUNCTION IS CALLED:"<<endl;
// newnode=s.peek();
// cout<<"TOP OF STACK IS: (" <<newnode->key << "," << newnode->data << ")";
// break;
// case 5:
// cout<<"COUNT FUNCTION IS CALLED: "<<endl;
// cout<<"NUMBER OF NODES IN THE STACK IS : "<<s.count()<<endl;
// break;
// case 6:
// cout<<"DISPLAY FUNCTION IS CALLED:"<<endl;
// s.display();
// break;
// case 7:
// system("cls");
// break;
// default:
// cout<<"ENTER THE PROPER OPTION THAT IS GIVEN TO YOU: "<<endl;
// break;}
// }while(option!=0);
// return 0;}








// #include<iostream>
// #include<stack>
// using namespace std;

// void reversestack(stack<int> &s1){
// stack<int> ans;
// while(!s1.empty()){
// ans.push(s1.top());
// s1.pop();}
// s1=ans;}

// void copystack(stack<int> &s1,stack<int> &ans){
// if(s1.empty())
// return;
// ans.push(s1.top());
// s1.pop();
// copystack(s1,ans);}

// void pushonbottom(stack<int> &s1,int data){
// stack<int> ans;
// while(!s1.empty()){
// ans.push(s1.top());
// s1.pop();}
// s1.push(data);
// while(!ans.empty()){
// s1.push(ans.top());
// ans.pop();}} 

// void popfrombottom(stack<int> &s1){
// stack<int> ans;
// while(s1.size()!=1){
// ans.push(s1.top());
// s1.pop();}
// s1.pop();
// while(!ans.empty()){
// s1.push(ans.top());
// ans.pop();}} 

// void pushatmiddle(stack<int> &s1,int index ,int data){
// stack<int> ans;
// int x=s1.size();
// int count=0;
// while(count<(x-index)){
// count++;
// ans.push(s1.top());
// s1.pop();}
// s1.push(data);
// while(!ans.empty()){
// s1.push(ans.top());
// ans.pop();}} 

// void popfrommiddle(stack<int> &s1,int index){
// stack<int> ans;
// int x=s1.size();
// int count=0;
// while(count<(x-index)){
// count++;
// ans.push(s1.top());
// s1.pop();}
// s1.pop();
// while(!ans.empty()){
// s1.push(ans.top());
// ans.pop();}} 

// void display(stack<int> s1){
// while(!s1.empty()){
// cout<<s1.top()<<endl;
// s1.pop();}}

// int main(){
// int data,index;
// stack<int> s;
// s.push(200);
// s.push(400);
// s.push(600);
// s.push(800);
// s.push(1000);
// cout<<"ALL THE ELEMENT IN THE STACK: "<<endl;
// display(s);
// cout<<endl;
// // cout<<"REVERSE ORDER OF THE STACK ELEMENT :"<<endl;
// // reversestack(s);
// // display(s);
// // cout<<endl;
// // cout<<"COPYSTACK USING RECURSION:"<<endl;
// // stack<int> result;
// // copystack(s,result);
// // display(s);
// // cout<<endl;
// // cout<<"ADD ELEMENT IN THE BOTTOM OF THE STACK:"<<endl;
// // cin>>data;
// // pushonbottom(s,data);
// // display(s);
// // cout<<endl;
// // cout<<"ADD ELEMENT BETWEEN THE ELEMENT OF THE STACK:"<<endl;
// // cin>>index;
// // cin>>data;
// // pushatmiddle(s,index,data);
// // display(s);
// // cout<<endl;
// // cout<<"REMOVE THE ELEMENT FROM THE BOTTON OF THE STACK:"<<endl;
// // popfrombottom(s);
// // display(s);
// // cout<<endl;
// cout<<"REMOVEING FORM THE MIDDEL OF THE STACK:"<<endl;
// cin>>index;
// popfrommiddle(s,index);
// display(s);
// cout<<endl;
// return 0;}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool valid(string st){
// stack<char> s;
// for(int i=0;i<st.size();i++){
// char ch=i;
// if(ch=='(' || ch=='[' || ch=='{')
// s.push(ch);
// else{
// if(ch==')' && s.top()=='(' && !s.empty())
// s.pop();
// else if(ch=='}' && s.top()=='{' && !s.empty())
// s.pop();
// else if(ch==']' && s.top()=='[' && !s.empty())
// s.pop();
// else 
// return false;}}
// return s.empty();}
// int main(){
// string st;
// cin>>st;
// getline(cin,st);
// if(valid(st)==0)
// cout<<"ENTERED BRACKETS ARE BALANCED: "<<st<<endl;
// else
// cout<<"ENTERED BRACKETS ARE NOT BALANCED: "<<st<<endl;
// return 0;}





// #include<bits/stdc++.h>   // work for single line array only
// using namespace std;
// int main(){
// 	int temp1;
// 	vector<int> nums1;
// 	while(cin>>temp1) nums1.push_back(temp1);

// 	for(auto it : nums1) cout<<it<<"    ";

// 	return 0;
// }



// #include<bits/stdc++.h>   // work for single line array only
// using namespace std;
// int main(){
// 	string s1;
// 	getline(cin,s1);
// 	stringstream ss(s1);
// 	vector<int> nums; int temp1;
// 	while(ss >> temp1) nums.push_back(temp1);
// 	for(auto it : nums) cout<<it<<"    ";

// 	cout<<endl;

// 	string s2;
// 	getline(cin,s2);
// 	stringstream ss1(s2);
// 	vector<int> nums2; int temp2;
// 	while(ss1 >> temp2) nums2.push_back(temp2);

// 	for(auto it : nums2) cout<<it<<"    ";

// 	return 0;
// }