#include<bits/stdc++.h>
using namespace std;

void swap(int& a,int& b){
	int temp = a;
	a = b;
	b = temp; 
}
// ѡ������max
void Xuan_max(int a[],int len){
	for(int i=0;i<len;i++){
		int max = i;
		for(int j=i+1;j<len;j++){
			if(a[max]<a[j])
				max = j;
		}
		if(max!=i)
			swap(a[max],a[i]);
	}
} 

void Xuan_min(int a[],int len){
	for(int i=0;i<len;i++){
		int min = i;  // ÿ��ѭ����ʼ���õ�һ����Ϊ������С������j��forѭ����ȷ��һ��ֵ��i++
		for(int j=i+1;j<len;j++){ // ���һ��Ϊ���һ��Ԫ�أ��ǲ�����ѡ������ֱ��������� 
			if(a[min]>a[j])
				min = j;
		}
		if(min!=i){
			swap(a[min],a[i]);
		} 
	}
}



int main(){
	int n;
	cout<<"����������Ԫ�صĸ���:"<<endl;
	cin>>n;
	int a[n];
	cout<<"����������Ԫ��:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	cout<<<<endl;
	Xuan_max(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	// ��������� 
//	vector<int>::iterator it = a.begin();
//	for(it;it!=a.end();it++){
//		cout<<*it<<" ";
//	}
} 
