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
	// ���ֲ���
	int left = 0;
	int right = a.size()-1;
	while(left<=right){
		int mid = (left + right) / 2; // ÿ�θ���mid��ֵ 
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
