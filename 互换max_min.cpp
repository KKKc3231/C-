#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n]; 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=0,min=0;
	int max_index=0,min_index=0;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max = a[i];
			max_index=i;
		}
		if(a[i]<min){
			min = a[i];
			min_index=i;
		}
	}
	int temp;
	temp = a[max_index];
	a[max_index] = a[min_index];
	a[min_index] = temp;
	// 交换两个元素可以使用swap 
//	swap(a[max_index],a[min_index]);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
} 
