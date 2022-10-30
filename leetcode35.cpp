#include<iostream>
#include<vector>
using namespace std;
// ����Ѱ�Ҳ����λ�� 
int research(vector<int> &a,int &target){
	int left = 0;
	int right = a.size()-1;
	int mid;
	while(left<=right){
		mid = (left + right)>>1; // ����һλ���൱�ڳ���2���� /2 ��һ���� 
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
