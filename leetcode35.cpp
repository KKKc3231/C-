#include<iostream>
#include<vector>
using namespace std;
// 二分寻找插入的位置 
int research(vector<int> &a,int &target){
	int left = 0;
	int right = a.size()-1;
	int mid;
	while(left<=right){
		mid = (left + right)>>1; // 右移一位，相当于除以2，比 /2 快一倍； 
		if(target>a[mid]){
			left = mid + 1;
		}else if(target<a[mid]){
			right = mid - 1;
		}else{
			return mid;
		}
	}
	return left;
}

int main(){
	int n,target;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<a.size();i++) cin>>a[i];
	cin>>target;
	cout<<research(a,target)<<endl;
	return 0;
}
