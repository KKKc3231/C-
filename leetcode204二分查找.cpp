#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,target;
	scanf("%d",&n);
	vector<int> a(n);
	for(int i=0;i<a.size();i++) cin>>a[i];
	cin>>target;
	// 二分查找
	int left = 0;
	int right = a.size()-1;
	while(left<=right){
		int mid = (left + right) / 2; // 每次更新mid的值 
		if(target<a[mid]){
			right = mid - 1;
		}else if(target>a[mid]){
			left = mid + 1;
		}else{
			cout<<mid<<endl;
			return 0;
		}
	}
	cout<<-1<<endl; 
	return -1;
 } 
