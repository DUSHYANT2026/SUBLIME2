#include<bits/stdc++.h>
using namespace std;
void liststl(list<int>l){
for(auto i=l.begin();i!=l.end();i++){
cout<<*i<<" ";}
cout<<endl;}
int main(){
list<int>l;
int n;
cin>>n;
for(int j=1;j<=n;j++){
l.push_back(j);}
cout<<"All the elements in the list are: " ;
liststl(l);
cout<<"All the elements after reverse the list: ";
l.reverse();
liststl(l);
cout<<"Number of the elemenst that present in the list: "<<l.size();
l.push_back(30);
l.push_back(200);
l.push_back(100);
l.push_back(300);
l.push_front(400);
l.push_front(800);
l.push_front(500);
cout<<endl;
cout<<"First element in the list: "<<l.front();
cout<<"\nLast element in the list: "<<l.back();
cout<<"\nAll the elements after adding in the list: ";
liststl(l);
l.pop_back();
l.pop_back();
l.pop_front();
cout<<"Elements in the list after romving: ";
liststl(l);
cout<<"All the elements in the list after sort: ";
l.sort();
liststl(l);
cout<<"First element in the list: "<<l.front();
cout<<"\nLast element in the list: "<<l.back();
cout<<"\nNumber of the elements in the list after adding and removing: "<<l.size();
cout<<"\nAll the elements in the list after sort: ";
l.sort();
liststl(l);
return 0;}
