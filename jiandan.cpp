#include<bits/stdc++.h>
using namespace std;

void swap(int& a,int& b){
	int temp = a;
	a = b;
	b = temp; 
}
// 选择排序max
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
		int min = i;  // 每次循环开始先让第一个作为最大或最小，依次j的for循环可确定一个值，i++
		for(int j=i+1;j<len;j++){ // 最后一轮为最后一个元素，那不用再选择排序，直接排在最后 
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
	cout<<"请输入数组元素的个数:"<<endl;
	cin>>n;
	int a[n];
	cout<<"请输入数组元素:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	cout<<<<endl;
	Xuan_max(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	// 迭代器输出 
//	vector<int>::iterator it = a.begin();
//	for(it;it!=a.end();it++){
//		cout<<*it<<" ";
//	}
} 
