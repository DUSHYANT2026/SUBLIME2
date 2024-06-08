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
// next=NULL;}
// node(int k,int d){
// key=k;
// data=d;}};

// class singlelinkedlist{
// public:
// node* head;
// singlelinkedlist(){
// head=NULL;}
// singlelinkedlist(node* n){
// head=n;}

// node* nodeexist(int k){
// node* temp=NULL;
// node* ptr=head;
// while(ptr!=NULL){
// if(ptr->key==k)
// temp=ptr;
// else
// ptr=ptr->next;}
// return temp;}

// void appendnode(node* n){
// if(nodeexist(n->key)!=NULL)
// cout<<"NODE IS ALREADY EXIT: "<<n->key<<" :ENTER ANOTHER NODE WITH DIFFERENT KEY:"<<endl;
// else{
// if(head==NULL)
// head=n;
// else{
// node* ptr=head;
// while(ptr!=NULL){
// ptr=ptr->next;}
// ptr->next=n;}}}

// void prependnode(node* n){
// if(nodeexist(n->key)!=NULL)
// cout<<"NODE IS ALREADY EXIT: "<<n->key<<" :ENTER ANOTHER NODE WITH DIFFERENT KEY:"<<endl;
// else{
// n->next=head;
// head=n;}}

// void insertnode(int k, node* n){
// node* ptr=nodeexist(k);
// if(ptr==NULL)
// cout<<"THERE NO NODE WITH THIS VALUE SO ENTER RIGHT KEY: "<<k<<endl;
// else{
// if(nodeexist(n->key)!=NULL)
// cout<<"NODE IS ALREADY EXIT: "<<n->key<<" :ENTER ANOTHER NODE WITH DIFFERENT KEY:"<<endl;
// else{
// n->next=ptr->next;
// ptr->next=n;}}}
 
// void deletenodebykey(int k){

// }

// };
// int main(){

// return 0;}


#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(){
data=0;
next=NULL;}
node(int d){
data=d;}};

void insertnodehead(node* &head,int data){
node* newnode=new node(data);
newnode->next=head;
head=newnode;}

void insertnodeend(node*  &head,int data){
node* newnode=new node(data);
node* temp=head;
while(temp->next!=NULL){
temp=temp->next;}
temp->next=newnode;}

void display(node* head){
node* temp=head;
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->next;}
cout<<"NULL"<<endl;}

int main(){
node* head=NULL;
insertnodehead(head,100);
insertnodehead(head,400);
// insertnodeend(head,200);
// insertnodeend(head,3000);
// insertnodeend(head,2000);
// insertnodeend(head,4000);
display(head);
return 0;}