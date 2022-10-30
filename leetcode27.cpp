#include<iostream>
#include<vector> 
using namespace std;
int main(){
	int n,val;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];
	cin>>val;
	int len=0;
	for(int i=0;i<n;i++){
		if(nums[i]!=val) len=len+1;
		else nums[i] = -999; 
	}
	cout<<len<<endl;
	for(int i=0;i<n;i++){
		if(nums[i]!=-999) cout<<nums[i]<<" ";
	}
	return 0;
} 
