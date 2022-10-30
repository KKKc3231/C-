// list 
#include<iostream>
#include<string>
#include<list>
using namespace std;

void PrintL(list<int> L){
	for(list<int>::iterator it=L.begin();it!=L.end();it++)
		cout<<*it<<" ";
	cout<<"kk"<<endl;
}

int main(){
	list<int> L;
	list<int> l2; 
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		L.push_back(temp);
	}
//	PrintL(L);
	list<int>l1(10,123);
//	l1.assign(10,23); // 重新分配内存 
	PrintL(l1);
	L.swap(l1); // 将L和l1进行交换 
	PrintL(L);
	PrintL(l1);
	l1.resize(6); //将l1的大小resize为6,不足6的用0来补
	l1.resize(6,2); // 用2来补齐. 
	PrintL(l1);
	// 插入删除
	l2.push_back(10); // 尾插法
	l2.push_back(20);
	l2.push_back(30);
	l2.push_front(100); // 头插法 
	l2.push_front(200);
	l2.push_front(300); 
	l2.push_front(400);
	PrintL(l2);
	// 尾删 首删 
	l2.pop_back();
	l2.pop_front(); 
	PrintL(l2); 
	// insert,第一个参数为指针位置
	list<int>::iterator it = l2.begin(); 
	l2.insert(++it,10); // 在it指针后插入10 
	l2.erase(++it); // 清除指针it指向的元素 
	l2.remove(20);  
	PrintL(l2);
	l2.clear(); // 清空整个l2 
	PrintL(l2);
}
