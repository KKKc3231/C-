#include<bits/stdc++.h>
using namespace std;

typedef struct BitNode{
	char data;
	struct BitNode *lchird;
	struct BitNode *rchird;
}BitNode,*BitTree;

void CreatTree(BitTree &T){
	char c;
	cin>>c;
	if(c == '#') // #����Ҷ�ӽ�� 
		T = NULL;
	// ����������
	else{
		T = new BitNode; 
		T->data = c;
		CreatTree(T->lchird);
		CreatTree(T->rchird);
	}
} 

void Print(BitTree T){
	if(T){
		cout<<T->data<<" ";
		Print(T->lchird);
		Print(T->rchird); 
	}
} 
int main(){
	BitTree T ;
	CreatTree(T);
	Print(T);
} 
