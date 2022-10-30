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
//	l1.assign(10,23); // ���·����ڴ� 
	PrintL(l1);
	L.swap(l1); // ��L��l1���н��� 
	PrintL(L);
	PrintL(l1);
	l1.resize(6); //��l1�Ĵ�СresizeΪ6,����6����0����
	l1.resize(6,2); // ��2������. 
	PrintL(l1);
	// ����ɾ��
	l2.push_back(10); // β�巨
	l2.push_back(20);
	l2.push_back(30);
	l2.push_front(100); // ͷ�巨 
	l2.push_front(200);
	l2.push_front(300); 
	l2.push_front(400);
	PrintL(l2);
	// βɾ ��ɾ 
	l2.pop_back();
	l2.pop_front(); 
	PrintL(l2); 
	// insert,��һ������Ϊָ��λ��
	list<int>::iterator it = l2.begin(); 
	l2.insert(++it,10); // ��itָ������10 
	l2.erase(++it); // ���ָ��itָ���Ԫ�� 
	l2.remove(20);  
	PrintL(l2);
	l2.clear(); // �������l2 
	PrintL(l2);
}
