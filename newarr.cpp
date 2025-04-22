#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	vector<int> nums;
	for(int i=0; i<n; i++){
		cin>>x;
		nums.push_back(x);
	}

	int sum = 0;

	while(true){
		vector<int> temp;
		for(int i=0; i<nums.size(); i++){
			if(i%2 == 0) sum += nums[i];
			else temp.push_back(nums[i]);
		}
		if(temp.size() == 1) break;
		nums = temp;
 	}
 	cout<<sum<<endl;
 	return 0;
}