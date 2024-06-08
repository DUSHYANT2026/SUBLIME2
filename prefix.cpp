// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isoperater(char c){
// if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
// return true;
// else
// return false;}
// int precedence(char c){
// if(c=='^')
// return 3;
// else if(c=='*'||c=='/')
// return 2;
// else if(c=='+'||c=='-')
// return 1;
// else
// return-1;}

// string infixtoprefix(stack<char> s,string infix){
// string prefix;
// reverse(infix.begin(),infix.end());
// int n=infix.length();

// for(int i=0;i<n;i++){
// if(infix[i]=='(')
// {infix[i]=')';}
// else if(infix[i]==')'){
// infix[i]='(';}}

// for(int i=0;i<n;i++){

// if(infix[i]>='a'&&infix[i]<='z' || infix[i]>='A'&&infix[i]<='Z'){
// prefix+=(infix[i]);}

// else if(infix[i]=='('){
// s.push(infix[i]);}

// else if(infix[i]==')'){
// while((!s.empty())&& (s.top()!='(')){
// char temp=s.top();
// prefix+=temp;
// s.pop();}
// if(s.top()=='(')
// {s.pop();}}

// else if(isoperater(infix[i])){
// if(s.empty()) 
// {s.push(infix[i]);}
// else{
// if(precedence(infix[i])>precedence(s.top())) 
// {s.push(infix[i]);}
// else if(precedence(infix[i])==precedence(s.top()) && (infix[i]=='^')){
// while(precedence(infix[i])==precedence(s.top()) && (infix[i]=='^')){
// prefix+=s.top();
// s.pop();}
// s.push(infix[i]);}
// else if(precedence(infix[i])==precedence(s.top())){
// s.push(infix[i]);}
// else {
// while(precedence(infix[i])<precedence(s.top())&&(!s.empty())){
// prefix+=s.top();
// s.pop();}
// s.push(infix[i]);}}}}

// while(!s.empty()){
// prefix+=s.top();
// s.pop();}

// reverse(prefix.begin(),prefix.end());
// return prefix;}

// int main(){
// string prefix,infix;
// cin>>infix;
// stack<char> s;
// cout<<"INFIX STATEMENT THAT ENTERED BY YOU: "<<infix<<endl;
// prefix=infixtoprefix(s,infix);
// cout<<"PREFIAX OF INFIX THAT YOU ENTERED: "<<endl;
// cout<<prefix<<endl;
// return 0;}



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool isoperater(char c){
// if(c=='+'||c=='-'||c=='/'||c=='*'||c=='^')
// return true;
// else
// return false;}

// bool isoperand(char c){
// if(c>='a'&&c<='z'&&c>='A'&&c<='Z')
// return true;
// else
// return false;}

// int precedence(char c){
// if(c=='^')
// return 3;
// else if(c=='*'||c=='/')
// return 2;
// else if(c=='-'||c=='+')
// return 1;;
// else
// return -1;}

// string infixtoprefix(stack<char>s,string infix){
// string prefix;
// reverse(infix.begin(),infix.end());
// int n=infix.length();
// for(int i=0;i<n;i++){
// if(infix[i]=='(')
// infix[i]=')';
// else if(infix[i]=')')
// infix[i]='('}

// for(int i=0;i<n;i++){
// if(isoperand(infix[i])){
// prefix+=infix[i];}

// else if(infix[i]=='('){s.push(infix[i]);}
// else if(infix[i]==')'){
// while(!s.empty()&&s.top()!='('){
// prefix+=s.top();
// s.pop();}
// if(s.top()=='(')
// s.pop();}

// else{

// }}

// return prefix;}
// int main(){
// string prefix,infix;
// cout<<"ENTER THE INFIX STATEMENT: "<<endl;
// cin>>infix;
// stack<char>s;
// cout<<"YOUR PREFIX STATEMENT THAT DRIVED FROM THE INFIX STATEMENT: "<<endl;
// cout<<prefixtoinfix(s,infix)<<endl;
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// bool isoperand(char c){
// if(c>='a'&&c<='z'||c>='A'&&c<='Z')
// return true;
// else
// return false;}

// string prefixtoinfix(string prefix){
// stack<string>s;
// int n=prefix.length();
// reverse(prefix.begin(),prefix.end());
// for(int i=0;i<n;i++){
// if(isoperand(prefix[i])){
// string op(1,prefix[i]);
// s.push(op);}
// else{
// string op1=s.top();
// s.pop();
// string op2=s.top();
// s.pop();
// s.push("("+op1+prefix[i]+op2+")");}}
// return s.top();}

// int main(){
// string prefix,infix;
// cin>>prefix;
// cout<<"PREFIX STATEMENT THAT YOU ENTERED TO CHANEG IT INTO INFIX:"<<endl;
// cout<<prefix<<endl;
// cout<<"INFIX STATEMENT THAT DRIVED FROM THE PERFIX STATEMENT THAT YOU ENTERED:"<<endl;
// cout<<prefixtoinfix(prefix)<<endl;
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// bool isoperand(char c){
// if(c>='a'&&c<='z'||c<='Z'&&c>='A')
// return true;
// else 
// return false;}

// string prefixtopostfix(string prefix){
// stack<string>s;
// int n=prefix.length();
// reverse(prefix.begin(),prefix.end());
// for(int i=0;i<n;i++){
// if(isoperand(prefix[i])){
// string op(1,prefix[i]);
// s.push(op);}
// else{
// string op1=s.top();
// s.pop();
// string op2=s.top();
// s.pop();
// s.push(op1+op2+prefix[i]);}}
// return s.top();}

// int main(){
// string postfix,prefix;
// cin>>prefix;
// cout<<"PREFIX STATEMENT THAT YOU WANT TO CONVERT INTO POSTFIX STATEMENT: "<<endl;
// cout<<prefix<<endl;
// cout<<"POSTFIX STATEMENT THAT DERIVED FROM THE PREFIX STATEMENT: "<<endl;
// cout<<prefixtopostfix(prefix)<<endl;
// return 0;}

