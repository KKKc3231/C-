#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;

int main(){
	int x,y,ans;
	int n,temp;
	// ���ȶ��У�С���ѣ� 
	priority_queue<long long,vector<long long>,greater<long long> > q;
	priority_queue<int> q2; //Ĭ�ϴ󶥶� 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		q.push(temp);
//		q2.push(temp);
	}
	/*
	for(int i=0;i<n;i++){
		temp = q2.top();
		cout<<temp<<" ";
		q2.pop();
	}
	*/
	
	// ȡ��С���ѵ�ǰ����Ԫ�أ������push�����ȶ��У����Զ����� 
	while(q.size()>1){
		x = q.top();
		q.pop();
		y = q.top();
		q.pop();
		q.push(x+y); 
		ans += (x+y);
	}
	cout<<"answer: "<<ans<<endl;
} 
