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
	cout<<"������n��ֵ��"<<endl;
	cin>>n;
	int a[n]; //����n֮���ڸ�����дn����������ϰ�� 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// ð�ݣ����һ��Ԫ�ز��ñȽϣ����ʱ�临�Ӷ�O(n)���O(n^2) 
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
