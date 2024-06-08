// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// map<int,int>m;
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
// m.insert({i,i*3});}

// cout<<"All the keys and element in the map: "<<endl;
// cout<<"key\telement"<<endl;
// for(auto j=m.begin();j!=m.end();j++){
// cout<<j->first <<"\t"<<j->second<<endl;}

// int x=4;
// if(m.find(4)!=m.end()){
// cout<<x<<" Is present in the map"<<endl;}

// int p=5;
// if(m.find(5)!=m.end()){
// cout<<p<<" Is present in the map"<<endl;}

// cout<<"Number of elements and keys present in the map: "<<m.size();
// cout<<endl;
// m.erase(m.begin());
// m.erase(m.begin());
// m.insert({12,80});
// m.insert({11,45});
// m.insert({13,90});
// m.insert({14,900});
// cout<<"All the keys and element in the map: "<<endl;
// cout<<"key\telement"<<endl;
// for(auto j=m.begin();j!=m.end();j++){
// cout<<j->first <<"\t"<<j->second<<endl;}
// cout<<"Number of the elemebt that present in the map: "<<m.size();
// cout<<endl;
// if(m.empty()==true)
// cout<<"The map is empty"<<endl;
// else
// cout<<"The map is not empty"<<endl;
// m.clear();
// cout<<"After clear all keys and element from the map"<<endl;
// if(m.empty()==false)
// cout<<"The map is not empty"<<endl;
// else
// cout<<"The map is empty"<<endl;
// cout<<"Number of the elements after clear all thing from the map: "<<m.size();
// return 0;}
















// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// set<int>s;
// // set<int,greater<int> s1;
// int n,p;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>p;
// s.insert(p);}

// cout<<"All the elements in the set: ";
// for(auto j=s.begin();j!=s.end();j++)
// cout<<*j<<" ";
// cout<<endl;

// cout<<"ANOTHER METHOD TO DISPLAY THE VALUE IN THE SET:"<<endl;
// for(auto value: s){
// cout<<value<<" ";cout<<endl;}

// // cout<<"TO CHECK THAT NUMBER IS PRESENT IN THE SET:"<<endl;
// // cin>>data;
// // int x=data;
// // if (s.find(data)!=s.end())
// // cout<<x<<" :Is present in the set"<<endl;

// cout<<"Total number of elements in the set: "<<s.size()<<endl;
// s.erase(s.begin());
// s.erase(s.begin());
// s.insert(69);
// s.insert(13);
// cout<<"All the elements in the set after erase and insert: ";
// for(auto j=s.begin();j!=s.end();j++)
// cout<<*j<<" ";
// cout<<endl;
// cout<<"The minimum element in the set: "<<*min_element(s.begin(),s.end());
// cout<<"\nThe maximum element in the set: "<<*max_element(s.begin(),s.end());
// cout<<endl;
// if (s.empty()==true)
// cout<<"The set is empty"<<endl;
// else 
// cout<<"The set is not empty"<<endl;
// cout<<"AFTER CLEAR ALL THE ELEMENTS FROM THE SET"<<endl;
// s.clear();
// cout<<"Total number of elements in the set: "<<s.size()<<endl;
// if (s.empty()==true)
// cout<<"The set is empty"<<endl;
// else 
// cout<<"The set is not empty"<<endl;
// return 0;}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// set<string>s;
// int n;
// cin>>n;
// while(n--){
// string name;
// cin>>name;
// s.insert(name);}
// cout<<"NAME THAT DO NOT REPEATED:"<<endl;
// for(auto value:s)
// cout<<value<<endl;
// return 0;}

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,m;
// cin>>n>>m;
// int sum=0;
// vector<int> v1(n);
// vector<int> v2(m);
// for(int i=0;i<n;i++)
// cin>>v1[i];
// for(int i=0;i<m;i++)
// cin>>v2[i];
// set<int>s;
// for(auto value: v1)
// s.insert(value);
// for(auto val: v2){
// if(s.find(val)!=s.end())
// sum+=val;}
// cout<<"SUM OF THE COMMON ELEMENTS IN THE TWO VECTORS: "<<sum<<endl;
// return 0;}












// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,x;
// cin>>n;
// vector<int> v;
// for(int i=1;i<=n;i++){
// cin>>x;	
// v.push_back(x);}

// cout<<" All the elements in the vector: ";
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";
// cout<<endl;

// cout<<"Removing the last value of vector: ";
// v.pop_back();
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";

// cout<<"\nlast value in the vector:"<<v.back();

// v.insert(v.begin()+2,9);
// cout<<"\nThe elements in the vector after insert in the front: ";
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";

// v.erase(v.begin()+2);
// cout<<"\nThe elements in the vector after erase: ";
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";

// cout<<"\nFirst element in of the vector: "<<v.front();
// cout<<"\nFirst element in the vector: "<<v[0];
// cout<<"\nSecond element in the vector: "<<v[1];  
// cout<<endl;


// cout<<"ADDING OR INSERTING ELEMENT IN THE ARRAY:"<<endl;
// v.insert(v.begin()+5,7988);
// v.insert(v.begin()+2,88);
// v.insert(v.begin()+6,79);
// v.insert(v.begin()+0,13);
// cout<<"SIZE OF THE ARRAY: "<<v.size()<<endl;
// cout<<"VECTOR AFTER SOME CHANGE:"<<endl;
// for(auto j=v.begin();j!=v.end();j++)
// cout<<*j<<" ";
// cout<<"\nFirst element in the vector: "<<v.front();
// cout<<"\nFirst element in the vector: "<<v[0];
// cout<<"\nSecond element in the vector: "<<v[1]; 
// cout<<"\nlast element in the vector: "<<v[v.size()-1];

// cout<<endl;
// if (v.empty())
// cout<<"\nvector is empty";
// else
// cout<<"vector is not empty";

// cout<<"\nThe minimum element in the vector is: "<<*min_element(v.begin(),v.end());
// cout<<"\nThe maximum element in the vector is: "<<*max_element(v.begin(),v.end());

// cout<<"\nSORTING THE VECTOR";
// sort(v.begin(),v.end());
// int target;
// cin>>target;
// cout<<"\nTHE LOWERBOUND OF THE ELEMENT:"<<lower_bound(v.begin(),v.end(),target)-v.begin();
// cout<<"\nTHE UPPERBOUND OF THE ELEMENT:"<<upper_bound(v.begin(),v.end(),target)-v.begin();
// cout<<endl;
// for(int i=0;i<v.size();i++)
// cout<<v[i]<<" ";

// return 0;}









// #include<bits/stdc++.h>
// using namespace std;
// void priorityqueue(priority_queue<int> ps){
// while(!ps.empty()){
// cout<<ps.top()<<" ";
// ps.pop();}}
// int main(){
// priority_queue<int> p;
// int n,x;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>x;
// p.push(x);}
// cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE:"<<endl;
// priorityqueue(p);
// cout<<endl;
// cout<<"LARGEST ELEMENT IN THE HEAP IS THE FIRST ELEMENT: "<<p.top()<<endl;
// cout<<"TO FIND THE SIZE OF THE HEAP: "<<p.size()<<endl;
// if(p.empty())
// cout<<"HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE HEAP: "<<endl;
// for(int i=0;i<n;i++){
// p.pop();}
// if(p.empty())
// cout<<"HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE HEAP: "<<endl;
// for(int i=1;i<=100;i++){
// if(i%5==0)
// p.push(i);}
// cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueue(p);
// cout<<endl;
// cout<<"TO FIND THE SIZE OF THE HEAP: "<<p.size()<<endl;
// p.emplace(7988);
// p.emplace(69);
// p.emplace(4);
// cout<<"PRINT THE MAX HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueue(p);
// return 0;}



// #include<bits/stdc++.h>
// using namespace std;
// void priorityqueueminheap(priority_queue<int,vector<int>,greater<int>> ps){
// while(!ps.empty()){
// cout<<ps.top()<<" ";
// ps.pop();}}
// int main(){
// priority_queue<int,vector<int>,greater<int>> p;
// int n,x;
// cin>>n;
// for(int i=0;i<n;i++){
// cin>>x;
// p.push(x);}
// cout<<"PRINT THE MIN HEAP OR PRIORITYQUEUE:"<<endl;
// priorityqueueminheap(p);
// cout<<endl;
// cout<<"SMALLEST ELEMENT IN THE MIN HEAP IS THE FIRST ELEMENT: "<<p.top()<<endl;
// cout<<"TO FIND THE SIZE OF THE MIN HEAP: "<<p.size()<<endl;
// if(p.empty())
// cout<<"MIN HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE MIN HEAP: "<<endl;
// for(int i=0;i<n;i++){
// p.pop();}
// if(p.empty())
// cout<<"MIN HEAP IS EMPTY THERE NO ELEMENT: "<<endl;
// else
// cout<<"THERE ARE ELEMENT IN THE MIN HEAP: "<<endl;
// for(int i=1;i<=100;i++){
// if(i%5==0)
// p.push(i);}
// cout<<"PRINT THE MIN HEAP OR PRIORITYQUEUE AFTER SOME CHANGE: "<<endl;
// priorityqueueminheap(p);
// cout<<endl;
// cout<<"TO FIND THE SIZE OF THE MIN HEAP: "<<p.size()<<endl;
// return 0;}








// #include<bits/stdc++.h>
// using namespace std;
// void liststl(list<int>l){
// for(auto i=l.begin();i!=l.end();i++){
// cout<<*i<<" ";}
// cout<<endl;}
// int main(){
// list<int>l;
// int n;
// cin>>n;
// for(int j=1;j<=n;j++){
// l.push_back(j);}
// cout<<"All the elements in the list are: " ;
// liststl(l);
// cout<<"All the elements after reverse the list: ";
// l.reverse();
// liststl(l);
// cout<<"Number of the elemenst that present in the list: "<<l.size();
// l.push_back(30);
// l.push_back(200);
// l.push_back(100);
// l.push_back(300);
// l.push_front(400);
// l.push_front(800);
// l.push_front(500);
// cout<<endl;
// cout<<"First element in the list: "<<l.front();
// cout<<"\nLast element in the list: "<<l.back();
// cout<<"\nAll the elements after adding in the list: ";
// liststl(l);
// l.pop_back();
// l.pop_back();
// l.pop_front();
// cout<<"Elements in the list after romving: ";
// liststl(l);
// cout<<"All the elements in the list after sort: ";
// l.sort();
// liststl(l);
// cout<<"First element in the list: "<<l.front();
// cout<<"\nLast element in the list: "<<l.back();
// cout<<"\nNumber of the elements in the list after adding and removing: "<<l.size();
// cout<<"\nAll the elements in the list after sort: ";
// l.sort();
// liststl(l);
// return 0;}






// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// pair<int,int>a[]={{1,2},{2,3},{30,4},{4,5}};
// cout<<a[0].first<<" "<<a[1].second<<" "<<a[2].first<<" "<<a[3].second<<endl;

// pair<int,pair<int,int>>p={40,{80,180}};
// cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
// pair<string,int>s[]={{"Dushyant",13},{"Aawan",19},{"Aryan",30},{"Sunay",24}};
// cout<<"Name"<<"\t"<<"Birthday"<<endl;
// cout<<s[0].first<<"\t"<<s[0].second<<endl;
// cout<<s[1].first<<"   \t"<<s[3].second<<endl;
// cout<<s[2].first<<"   \t"<<s[2].second<<endl;
// cout<<s[3].first<<"   \t"<<s[1].second<<endl;
// return 0;}


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// int n;
// cin>>n;
// for(int i=10;i<n;i++){
// v.push_back(i);}
// for(auto j=v.begin();j!=v.end();j++)
// if(*j%2==0||*j%3==0||*j%5==0||*j%7==0){
// v.erase(j);
// j--;}
// cout<<"1 2 3 5 7 ";
// for(auto j=v.begin();j!=v.end();j++)
// 	cout<<*j<<" ";	
// return 0;}
