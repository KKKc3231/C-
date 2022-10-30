#include<iostream>
#include<string>
using namespace std;

typedef struct node{
	char data;
	struct node *lchird,*rchild;
}node,*BitTree;

void CreatBitTree(BitTree &T){
	char c;
	cin >> c;
	if(c == '0') T = NULL;
	else{
		T = new node();
		T->data = c;
		CreatBitTree(T->lchird);
		CreatBitTree(T->rchild);
	}
}

int main(){
	BitTree T;
	CreatBitTree(T);
	cout<<"ok!"<<endl;
	return 0;
} 
