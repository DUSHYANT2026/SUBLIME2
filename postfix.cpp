#include<bits/stdc++.h>
using namespace std;
bool isoperater(char c){
if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^')
return true;
else
return false;}
int precedence(char c){
if(c=='^')
return 3;
else if(c=='/'||c=='*')
return 2;
else if(c=='+'||c=='-')
return 1;
else 
return -1;}

string infixtopostfix(stack<char> stack, string infix){
string postfix;
int n=infix.length();

for(int i=0;i<n;i++){
if(infix[i]>='A' && infix[i]<='Z' || infix[i]>='a' && infix[i]<='z'){
postfix+=infix[i];}

else if(infix[i]=='('){
stack.push(infix[i]);}

else if(infix[i]==')'){
while((!stack.empty()) && (stack.top()!='(')){
char temp=stack.top();
postfix+=temp;
stack.pop();}
if(stack.top()=='(')
stack.pop();}
 
else if(isoperater(infix[i])){
if(stack.empty())
stack.push(infix[i]);
else{
if(precedence(infix[i])> precedence(stack.top()))
stack.push(infix[i]);
else if(precedence(infix[i])==precedence(stack.top()) && infix[i]=='^')
stack.push(infix[i]);
else{
while((!stack.empty())&&precedence(infix[i])<=precedence(stack.top())){
char temp=stack.top();
postfix+=temp;
stack.pop();}
stack.push(infix[i]);} } } }

while(!stack.empty()){
postfix+=stack.top();
stack.pop();}

return postfix;}

int main(){
string infix,postfix;
cin>>infix;
stack<char> s;
cout<<"INFIX STATEMENT THAT YOU ENTERD TO CHANGE INTO POSTFIX:\n "<<infix<<endl;
// postfix=infixtopostfix(s,infix);
// cout<<"POSTFIX STATEMENT THAT DRIVED FROM INFIX STATEMENT THAT YOU ENTERED: "<<endl; 
// cout<<postfix<<endl; 
cout<<"POSTFIX STATEMENT THAT DRIVED FROM INFIX STATEMENT THAT YOU ENTERED: "<<endl;
cout<<infixtopostfix(s,infix)<<endl;
return 0;}

  


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isoperand(char c){
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
return true;
else
return false;}

string postfixtoinfix(string postfix){
stack<string>s;
int n=postfix.length();
for(int i=0;i<n;i++){
if(isoperand(postfix[i])){
string op(1,postfix[i]);
s.push(op);}
else{
string op1=s.top();
s.pop();
string op2=s.top();
s.pop();
s.push("("+op2+postfix[i]+op1+")");}}
return s.top();}

int main(){
string postfix,infix;
cin>>postfix;
cout<<"POSTFIX STATEMENT THAT YOU ENETERED TO CHANGE INTO INFIX: "<<endl;
cout<<postfix<<endl;
cout<<"INFIX STATEMENT THAT DRIVED FROM POSTFIX STATEMENT THAT YOU ENTERED: "<<endl;
cout<<postfixtoinfix(postfix)<<endl;
return 0;}



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isoperand(char c){
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
return true;
else 
return false;}

string postfixtoprefix(string postfix){
stack<string>s;
int n=postfix.length();
for(int i=0;i<n;i++){
if(isoperand(postfix[i])){
string op(1,postfix[i]);
s.push(op);}
else{
string op1=s.top();
s.pop();
string op2=s.top();
s.pop();
s.push(postfix[i]+op2+op1);}}
return s.top();}

int main(){
string prefix,postfix;
cin>>postfix;
cout<<"POSTFIX STATEMENT THAT YOU WANT TO CONVERTED INTO PREFIX: "<<endl;
cout<<postfix<<endl;
cout<<"PREFIX STATEMENT THAT DRIVED FROM THE PREFIX STATEMENT: "<<endl;
cout<<postfixtoprefix(postfix)<<endl;
return 0;}