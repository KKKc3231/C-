#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
	priority_queue<int> a; // 大根堆 
	priority_queue<int, vector<int>, greater<int> > b; // 小根堆 
	int n;
	cout<<"请输入元素的个数："<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		a.push(i);
		b.push(i);
	}
	while(!a.empty()){
		cout<<a.top()<<" ";
		a.pop();
	}
	cout<<endl; 
	while(!b.empty()){
		cout<<b.top()<<" ";
		b.pop();
	}
}
