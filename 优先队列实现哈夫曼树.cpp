#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;

int main(){
	int x,y,ans;
	int n,temp;
	// 优先队列（小顶堆） 
	priority_queue<long long,vector<long long>,greater<long long> > q;
	priority_queue<int> q2; //默认大顶堆 
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
	
	// 取出小顶堆的前两个元素，求和再push进优先队列，会自动调整 
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
