#include<bits/stdc++.h>
using namespace std;

// ���Ľṹ��
typedef struct node{
	char data;
	struct node *lchild;
	struct node *rchild;
}Bitnode,*BitTree;

// �������
void CreatBitTree(BitTree &T){ // ���봫����T�����ã���Ϊ���ݹ�����ָ��Ҫ�����仯
	char c;
	cin>>c;
	if(c=='#'){
		T=NULL;
	} // '#'Ϊ����һ��Ҷ�ӽ�㣻
	else{
		T = new node;
		T->data = c;
		CreatBitTree(T->lchild);
		CreatBitTree(T->rchild);
	}
}
// �������
void Preorder(BitTree T){
	if(T!=NULL){
		cout<<T->data<<" ";
		Preorder(T->lchild);
		Preorder(T->rchild);
	}
}
// �������
void Midorder(BitTree T){
	if(T){
		Midorder(T->lchild);
		cout<<T->data<<" ";
		Midorder(T->rchild);
	}
}
// �������
void Postorder(BitTree T){
	if(T){
		Postorder(T->lchild);
		Postorder(T->rchild);
		cout<<T->data<<" ";
	}
}
// ���ĸ���
int Leaf(BitTree T){
	if(T==NULL)
		return 0;
	if(T->lchild==NULL && T->rchild==NULL)
		return 1;
	return Leaf(T->lchild) + Leaf(T->rchild)+1; //�������Ľ����+�������Ľ����+1
}

// ���ĸ߶�
int height(BitTree T){
	if(T==NULL) return 0;
	int l = height(T->lchild);
	int r = height(T->rchild);
	return max(l,r)+1;
}
int main(){
	BitTree T;
	cout<<"�����������"<<endl;
	CreatBitTree(T);
	cout<<"���������"<<endl;
	Preorder(T);
	cout<<endl;
	cout<<"���������"<<endl;
	Midorder(T);
	cout<<endl;
	cout<<"���������"<<endl;
	Postorder(T);
	cout<<endl;
	cout<<"���ĸ�����"<<endl;
	cout<<Leaf(T)<<endl;
	cout<<"���ĸ߶ȣ�"<<endl;
	cout<<height(T)<<endl;
	cout<<endl;
	return 0;
}
//123##3##2##

