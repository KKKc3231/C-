#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main(){
	priority_queue<int> a; // ����� 
	priority_queue<int, vector<int>, greater<int> > b; // С���� 
	int n;
	cout<<"������Ԫ�صĸ�����"<<endl;
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
