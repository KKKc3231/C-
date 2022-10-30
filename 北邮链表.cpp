#include<bits/stdc++.h>
using namespace std;

typedef struct Lnode{
	int data;
	struct Lnode *next;
}Lnode,*List;

void PrintList(List &L){
	while(L!=NULL){
		cout<<L->data<<" ";
		L = L->next; 
	}
}

int main(){
	int n,data;
	cin>>n;
	List L = new Lnode;
	List M = L;
	scanf("%d",&data);
//	while(data!=-1){
//		List s = new Lnode;
//		s->data = data;
//		L->next = s;
//		L = s;
//		scanf("%d",&data);
//	}
	while(data!=-1){
		L->data = data;
		List s = new Lnode();
	 	L->next = s;
	 	L = s;
	 	scanf("%d",&data);
	}
	L->next = NULL;
	PrintList(M);
	return 0;
}
