#include<iostream>
#include<bits/stdc++.h>
#define SPACE 10
using namespace std;
class treenode{
public:
int data;
treenode* right;
treenode* left;
treenode(){
data=0;
right=NULL;
left=NULL;}
treenode(int d){
data=d;
right=NULL;
left=NULL;}};

class binaryst{
public:
treenode* root;
binaryst(){
root=NULL;}
binaryst(treenode* n){
root=n;}

bool isempty(){
if(root==NULL)
return true;
else
return false;}

void insertnode(treenode* n){
if(root==NULL){
root=n;
cout<<"NODE IS INSERT IN THE ROOT SO THIS IS FIRST NODE OF THE TREE:"<<endl;}
else{
treenode* temp=root;
while(temp!=NULL){
if(temp->data==n->data){
cout<<"YOU CAN-NOT ADD THE SAME NODE S0 ENTER THE NODE WITH DIFFERENT DATA:"<<endl;
return ;}
else if(n->data<temp->data && temp->left==NULL){
temp->left=n;
cout<<"CHILD NODE INSERTED IN THE LEFT OF THE PARENT NODE: "<<endl;
break; }
else if(n->data<temp->data){
temp=temp->left;}
else if(n->data>temp->data && temp->right==NULL){
temp->right=n;
cout<<"CHILD NODE INSERTED IN THE RIGHT OF THE PARENT NODE: "<<endl;
break; }
else{
temp=temp->right;}
}}}

treenode* recursiveinsert(treenode* r,treenode* n){
if(r==NULL){
r=n;
return r;}
else{
if(n->data<r->data){
r->left=recursiveinsert(r->left,n);}
else if(n->data>root->data){
r->right=recursiveinsert(r->right,n);}
else{
cout<<"YOU CAN-NOT ADD THE SAME NODE S0 ENTER THE NODE WITH DIFFERENT DATA:"<<endl;
return r;}
return r;}}

treenode* searchnode(int data){
if(root==NULL){
return root;}
else{
treenode* temp=root;
while(temp!=NULL){
if(data==temp->data){
return temp;}
else if(data<temp->data){
temp=temp->left;}
else{
temp=temp->right;}}
return NULL;}}

treenode* recursivesearch(treenode* n,int data){
if(n==NULL || n->data==data)
return n;
else if(data<n->data)
return recursivesearch(n->left,data);
else
return recursivesearch(n->right,data);}

int height(treenode* n){
if(n==NULL)
return -1;
else{
int leftheight=height(n->left);
int rightheight=height(n->right);
if(leftheight>rightheight)
return (leftheight+1);
else
return (rightheight+1);}}

void preorder(treenode* n){
if(n==NULL)
return;
cout<<n->data<<"  ";
preorder(n->left);
preorder(n->right);}

void inorder(treenode* n){
if(n==NULL)
return ;
inorder(n->left);
cout<<n->data<<"  ";
inorder(n->right);}

void postorder(treenode* n){
if(n==NULL)
return ;
postorder(n->left);
postorder(n->right);
cout<<n->data<<"  ";}

void display2D(treenode* n,int space){
if(n==NULL)
return ; 
space+=SPACE;
display2D(n->right,space);
cout<<endl;
for(int i=SPACE;i<space;i++)
cout<<" "; 
cout<<n->data<<endl;
display2D(n->left,space);}

void smallestdata(treenode* n){
treenode* temp=n;
while(temp->left!=NULL){
temp=temp->left;}
cout<<temp->data<<" ";}

void largestdata(treenode* n){
treenode* temp=n;
while(temp->right!=NULL){
temp=temp->right;}
cout<<temp->data<<" ";}

void printBFSlevel(treenode *n,int level){
if(n==NULL)
return ;
else if(level==0)
cout<<n->data<<" ";
else{
printBFSlevel(n->left,level-1);
printBFSlevel(n->right,level-1);}}

void printBFSORDER(treenode* n){
int h=height(n);
for(int i=0;i<=h;i++){
printBFSlevel(n,i);}}

treenode* minvalue(treenode* n){
treenode* temp=n;
while(temp->left!=NULL){
temp=temp->left;}
return temp;}

treenode* maxvalue(treenode* n){
treenode* temp=n;
while(temp->right!=NULL){
temp=temp->right;}
return temp;}

treenode* deletenode(treenode* r,int data){
if(r==NULL)
return NULL;
else if(r->data>data)
r->left=deletenode(r->left,data);
else if(r->data<data)
r->right=deletenode(r->right,data);
else{
if(r->left==NULL){
treenode* temp=r->right;
delete r;
return temp;}
else if(r->right==NULL){
treenode* temp=r->left;
delete r;
return temp;}
else{
treenode* temp=minvalue(r->right);
r->data=temp->data;
r->right=deletenode(r->right,temp->data);}}
return r;}

};
int main(){
binaryst b;
int option,data;
do{
cout<<"IMPLETATION OF BINARY SEARCH TREE: SELECT THE GIVEN OPTION TO EXCUTES THE FUNCTION IN BINARY SEARCH TREE:"<<endl;
cout<<"0) TO EXIST FROM THE PROGRAME: "<<endl;
cout<<"1) TO INSERT NODE USING TRAVERSAL:"<<endl;
cout<<"11) TO INSERT NODE USING RECUSIVE:"<<endl;
cout<<"2) TO SEARCH NODE USING TRAVERSAL:"<<endl;
cout<<"21) TO SEARCH NODE USING RECUSIVE:"<<endl;
cout<<"3) TO DELETE NODE:"<<endl;
cout<<"4) TO PRINT NODE IN 2-D: "<<endl;
cout<<"5) TO PRINT PRE-ORDER TRAVERSAL:"<<endl;
cout<<"6) TO PRINT IN-ORDER TRAVERSAL:"<<endl;
cout<<"7) TO PRINT POST-ORDER TRAVERSAL:"<<endl;
cout<<"8) TO PRINT IN BREADTH FIRST SAERCH:"<<endl;
cout<<"9) TO FIND HEIGHT OF THE TREE:"<<endl;
cout<<"10) TO CHECK EMPTY OR NOT:"<<endl;
cout<<"12) TO SMALLEST AND LARGEST ELEMENT NODE: "<<endl;
cout<<"13) TO CLEAR THE SCREEN:"<<endl;

cin>>option;
treenode* newnode=new treenode();

switch(option){
case 0:
break;
case 1:
cout<<"INSERT FUNCTION IS CALLED: USING TRAVERSAL: "<<endl;
cout<<"ENTER THE VALUE THAT YOU WANT TO INSERT IN THE BINARY SEARCH TREE: "<<endl;
cin>>data;
newnode->data=data;
b.insertnode(newnode);
cout<<endl;
break;
case 11:
cout<<"INSERT FUNCTION IS CALLED: USING RECURSIVE: "<<endl;
cout<<"ENTER THE VALUE THAT YOU WANT TO INSERT IN THE BINARY SEARCH TREE: "<<endl;
cin>>data;
newnode->data=data;
b.root=b.recursiveinsert(b.root,newnode);
cout<<endl;
break;
case 2:
cout<<"SEARCH FUNCTION IS CALLED:"<<endl;
cout<<"ENTER THE VALUE THAT YOU WANT TO SEACH IN THE BST:"<<endl;
cin>>data;
if(b.searchnode(data)!=NULL)
cout<<"YES THIS DATA EXIST IN YOUR BINARY SAERCH TREE: "<<data<<endl;
else
cout<<"DATA THAT YOU ENETED IS NOT EXISST IN THE TREE: ENTER ANOTHER DATA!"<<endl;
cout<<endl;
break;
case 21:
cout<<"RECUSIVE SEARCH FUNCTION IS CALLED:"<<endl;
cout<<"ENTER THE ELEMENT THAT YOU WANT TO SEARCH:"<<endl;
cin>>data;
if(b.recursivesearch(b.root,data)!=NULL)
cout<<"YES THIS DATA EXIST IN YOUR BINARY SAERCH TREE: "<<data<<endl;
else
cout<<"DATA THAT YOU ENETED IS NOT EXISST IN THE TREE: ENTER ANOTHER DATA!"<<endl;
cout<<endl;
break;
case 3:
cout<<"DELETE FUNCTION IS CALLED:"<<endl;
cout<<"ENTER THE NODE DATA THAT YOU WANT TO DELETE:"<<endl;
cin>>data;
newnode=b.deletenode(b.root,data);
cout<<endl;
break;
case 4:
cout<<"DISPLAY IN 2-D FUCTION IS CALLED:"<<endl;
b.display2D(b.root,5);
cout<<endl;
break;
case 5:
cout<<"PRE-ORDER TRAVERSAL FUNCTION IS CALLED:"<<endl;
b.preorder(b.root);
cout<<endl<<endl;
break;
case 6:
cout<<"IN-ORDER TRAVERSAL FUNCTION IS CALLED:"<<endl;
b.inorder(b.root);
cout<<endl<<endl;
break;
case 7:
cout<<"POST-ORDER TRAVERSAL FUNCTION IS CALLED:"<<endl;
b.postorder(b.root);
cout<<endl<<endl;
break;
case 8:
cout<<"BREADTH FIRST SEARCH TRAVERSAL FUNCTION IS CALLED:"<<endl;
b.printBFSORDER(b.root);
cout<<endl<<endl;
break;
case 9:
cout<<"HEIGHT FUNCTION IS CALLED:"<<endl;
cout<<"HEIGHT OF THE BINARY SEARCH TREE: "<<b.height(b.root);
cout<<endl<<endl;
break;
case 10:
cout<<"EMPTY FUNCTION IS CALLED:"<<endl;
if(b.isempty()==true)
cout<<"THERE IS NO NODE IN THE BINARY SEARCH TREE:"<<endl;
else
cout<<"BINARY SEARCH TREE IS NOT EMPTY THERE IS SOME NODE:"<<endl;
cout<<endl;
break;
case 12:
cout<<"FIND SMALLEST ELEMENT AND LARGEST ELEMENT FUNCTION CALLED: "<<endl;
cout<<"SMALLEST ELEMENT IN TREE OR THE PARENT NODE: ENTER THE NODE:"<<endl;
b.smallestdata(b.root);
cout<<endl;
cout<<"LARGEST ELEMENT IN TREE OR THE PARENT NODE: ENTER THE NODE:"<<endl;
b.largestdata(b.root);
cout<<endl;
break;
case 13:
cout<<"CLEAR SCREEN FUNCTION IS CALLED:"<<endl;
system("cls");
cout<<endl;
break;
default:
cout<<"ENTER PROPER OPTION TO EXECUTES THE PROGRAME:"<<endl;
}}while(option!=0);
return 0;}