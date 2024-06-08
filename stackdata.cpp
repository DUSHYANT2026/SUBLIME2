#include<iostream>
#include<string>
using namespace std;
class stack{
public:
int top;
int a[10];
stack(){
top=-1;
for(int i=0;i<10;i++){
a[i]=0;}}
bool isempty(){
if (top==-1)
return true;
else 
return false;}
bool isfull(){
if (top==10-1)
return true;
else 
return false;}
void push(int value){
if (isfull()){
cout<<"stack is over flow"<<endl;}
else {
top++;
a[top]=value;}}
int pop(){
if(isempty()){
return 0;}
else {
int popvalue=a[top];
a[top]=0;
top--;
return popvalue;}}
int count(){
return (top+1);}
int peek(int pos){
if(isempty()){
return 0;}
else 
return a[pos];}
void change(int pos, int value){
a[pos]=value;
cout<<pos<<endl;}
void display(){
for(int i=10-1;i>=0;i--){
cout<<a[i]<<endl;}}};
int main(){
stack s1;
int option,value,postion;
do{
cout<<"select the option number.enter 0 to exist"<<endl;
cout<<"1.push"<<endl;
cout<<"2.pop"<<endl;
cout<<"3.isempty()"<<endl;
cout<<"4.isfull()"<<endl;
cout<<"5.peek"<<endl;
cout<<"6.count"<<endl;
cout<<"7.change"<<endl;
cout<<"8.display"<<endl;
cout<<"9.clear screen"<<endl;
cin>>option;
switch(option){
case 1:
cin>>value;
s1.push(value);
break;
case 2:
cout<<s1.pop()<<endl;
break;
case 3:
if(s1.isempty())
cout<<"stack is empty"<<endl;
else
cout<<"stack is not empty"<<endl;
break;
case 4:
if(s1.isfull())
cout<<"stack is full"<<endl;
else 
cout<<"stack is not full"<<endl;
break;
case 5:
cin>>postion;
cout<<postion<<s1.peek(postion)<<endl;
break;
case 6:
cout<<s1.count()<<endl;
break;
case 7:
cin>>postion;
cout<<endl;
cin>>value;
s1.change(postion,value);
break;
case 8:
s1.display();
break;
default:
break;}
}while(option!=0);
return 0;}
