// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     string st;
//     while(n--){
//         cin>>st;
//             if(st == "X++" || st == "++X"){
//                 count++;
//             }
//             else{
//                 count--;
//             }
//         }
//     cout<<count;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n, x, kthindex;
//     cin >> n;
//     cin >> kthindex;

//     vector<int> nums;
//     for(int i = 0; i < n; i++){
//         cin >> x;
//         nums.push_back(x);
//     }

//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] >= nums[kthindex-1] && nums[i] > 0){
//             count++;
//         }
//     }

//     cout << count;
//     return 0;
// }




// 000001001011101010010110011
// 111001001011101010010110011

#include<bits/stdc++.h>
using namespace std;
void binarytostring(string s){
    unordered_map<string,char> mapp;
    mapp["001"] = 'C';
    mapp["010"] = 'G';
    mapp["011"] = 'A';
    mapp["101"] = 'T';
    mapp["110"] = 'U';
    string ans = "";
    for(int i=0;i<s.size();i+=3){
        string x = s.substr(i,3);
        if(mapp.find(x) != mapp.end()){
            ans += mapp[x];
        }
    }
    for(int i=0;i<3;i+=3){
        string x = s.substr(i,3);
        if(x == "000"){
            for(int i=0;i<ans.size();i++){
                if(ans[i] == 'U'){
                    ans[i] = 'T';
                }
            }
        }
        else if(x == "111"){
            for(int i=0;i<ans.size();i++){
                if(ans[i] == 'T'){
                    ans[i] = 'U';
                }
            }
        }
    }
    cout<<ans;
}
int main(){
    string s;
    getline(cin,s);
    binarytostring(s);
    return 0;
}




// #include<bits/stdc++.h>
// using namespace std;
// vector<char> compress(vector<char>& chars) {
//         if(chars.size() == 0) return {};
//         map<char,int> mapp;
//         for(auto it : chars){
//             mapp[it]++;
//         }
//         string x="";
//         for(auto it : mapp){
//             x += it.first;
//             x += to_string(it.second);
//         }
//         vector<char> ans;
//         for(auto it : x){
//             ans.push_back(it);
//         }
//         return ans;
//     }
// int main(){
//     vector<char> nums;
//     int n;
//     char x;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         nums.push_back(x);
//     }
//     vector<char> ans = compress(nums); 
//     for(auto it: ans){
//         cout<<it;
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// int compress(vector<int> &nums){
//     int n = nums.size();
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         ans += nums[i]*pow(2,(n-i-1));
//     }
//     return ans;
// }
// int compress2(vector<int> &nums){
//     int n = nums.size();
//     int ans = 0;
//     for(int i=0;i<n;i++){
//         ans = ans*10 + nums[i];
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums;
//     int n;
//     int x;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>x;
//         nums.push_back(x);
//     }
    
//     cout<<compress(nums)<<endl;
//     cout<<compress2(nums);
//     return 0;
// }







//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};

// } Driver Code Ends
//User function Template for C++

class Solution {
// private:
//     void linktovector(Node* root,vector<int> &nums){
//         if(root == NULL) return;
//         while(root != NULL){
//             nums.push_back(root->data);
//             root = root->next;
//         }
//     }
// private:
//     int vectortonum(vector<int> &nums){
//         int ans = 0;
//         int i = 0;
//         int n = nums.size();
//         while(i < n && nums[i] == 0){
//             i++;
//         }
//         for(;i<n;i++){
//             ans = ans*10 + nums[i];
//         }
//         return ans;
//     }
// private:
//     void numtovector(int num,vector<int> &nums){
//         if(num == 0){ 
//             nums.push_back(0); 
//         }
//         else{
//             while(num != 0){
//                 nums.push_back(num%10);
//                 num =num/10;
//             }
//             reverse(nums.begin(),nums.end());
//         }
//     }
private:
    Node* reverse(Node* head){
        Node *prev = NULL , *curr = head , *nxt = head;
        while(nxt){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
public:
    Node* subLinkedList(Node* head1, Node* head2) {
        // vector<int> nums1,nums2;
        // linktovector(head1,nums1);
        // linktovector(head2,nums2);
        
        // int sum = abs(vectortonum(nums1) - vectortonum(nums2));
        // vector<int> ans;
        // numtovector(sum,ans);
        
        // if(ans.size() == 0) return 0;
        // Node* head = new Node(0);
        // Node* temp = head;
        // for(auto it : ans){
        //     temp->next = new Node(it);
        //     temp = temp->next;
        // }
        // return head->next;
        
        
        Node* ans = head2;
        while(head1){
            if(head1->data == 0){
                head1 = head1->next;
            }
            else{
                break;
            }
        }
        while(head2){
            if(head2->data == 0){
                head2 = head2->next;
            }
            else{
                break;
            }
        }
        if(head1 == NULL && head2 == NULL){
            ans->next = NULL;
            return ans;
        }
        else if(head1 == NULL){
            return head2;
        }
        else if(head2 == NULL){
            return head1;
        }
        Node* temp1 = head1;
        Node* temp2 = head2;
        int count1 = 0;
        int count2 = 0;
        while(temp1){
            temp1 = temp1->next;
            count1++;
        }
        while(temp2){
            temp2 = temp2->next;
            count2++;
        }
        if(count1 == count2){
            if(head1->data == head2->data){
                while(head1 && head1->data == head2->data){
                    head1 = head1->next;
                    head2 = head2->next;
                }
                if(head1 == NULL && head2 == NULL){
                    ans->data = 0;
                    ans->next = NULL;
                    return ans;
                }
            }
            if(head1->data > head2->data){
                temp1 = head1;
            }
            else{
                temp1 = head2;
            }
        }
        else if(count1>count2){
            temp1 = head1;
        }
        else{
            temp1 = head2;
        }
        if(temp1 == head1){
            temp1 = reverse(head1);
            temp2 = reverse(head2);
        }
        else{
            temp1 = reverse(head2);
            temp2 = reverse(head1);
        }
        head1 = temp1;
        head2 = temp2;
        bool flag = false;
        while(temp2){
            if(flag == true){
                if(temp1->data == 0){
                    temp1->data = 9;
                    flag = true;
                }
                else{
                    temp1->data = temp1->data - 1;
                    flag = false;
                }
            }
            if(temp1->data >= temp2->data){
                temp1->data = temp1->data - temp2->data;
            }
            else{
                int n  = 10 - temp2->data;
                temp1->data = temp1->data + n;
                flag = true;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(flag == true){
            while(temp1->data == 0){
                temp1->data = 9;
                temp1 = temp1->next;
            }
            temp1->data = temp1->data -1;
        }
        temp1 = reverse(head1);
        while(temp1){
            if(temp1->data == 0){
                temp1 = temp1->next;
            }
            else{
                break;
            }
        }
        return temp1;
        return NULL;
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends