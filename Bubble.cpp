#include<iostream>
#include<string>
using namespace std;

void Swap(int a[],int i,int j){
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
} 

int main(){
	int n;
	cout<<"请输入n的值："<<endl;
	cin>>n;
	int a[n]; //输入n之后在给数组写n，养成良好习惯 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// 冒泡，最后一个元素不用比较，最好时间复杂度O(n)，最坏O(n^2) 
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1])
			Swap(a,j,j+1);
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
} 
