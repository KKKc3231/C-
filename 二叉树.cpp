#include<bits/stdc++.h>
using namespace std;

// 结点的结构体
typedef struct node{
	char data;
	struct node *lchild;
	struct node *rchild;
}Bitnode,*BitTree;

// 创建结点
void CreatBitTree(BitTree &T){ // 必须传过来T的引用，因为传递过来的指针要发生变化
	char c;
	cin>>c;
	if(c=='#'){
		T=NULL;
	} // '#'为创建一个叶子结点；
	else{
		T = new node;
		T->data = c;
		CreatBitTree(T->lchild);
		CreatBitTree(T->rchild);
	}
}
// 先序遍历
void Preorder(BitTree T){
	if(T!=NULL){
		cout<<T->data<<" ";
		Preorder(T->lchild);
		Preorder(T->rchild);
	}
}
// 中序遍历
void Midorder(BitTree T){
	if(T){
		Midorder(T->lchild);
		cout<<T->data<<" ";
		Midorder(T->rchild);
	}
}
// 后序遍历
void Postorder(BitTree T){
	if(T){
		Postorder(T->lchild);
		Postorder(T->rchild);
		cout<<T->data<<" ";
	}
}
// 结点的个数
int Leaf(BitTree T){
	if(T==NULL)
		return 0;
	if(T->lchild==NULL && T->rchild==NULL)
		return 1;
	return Leaf(T->lchild) + Leaf(T->rchild)+1; //左子树的结点数+右子树的结点数+1
}

// 树的高度
int height(BitTree T){
	if(T==NULL) return 0;
	int l = height(T->lchild);
	int r = height(T->rchild);
	return max(l,r)+1;
}
int main(){
	BitTree T;
	cout<<"构造二叉树："<<endl;
	CreatBitTree(T);
	cout<<"先序遍历："<<endl;
	Preorder(T);
	cout<<endl;
	cout<<"中序遍历："<<endl;
	Midorder(T);
	cout<<endl;
	cout<<"后序遍历："<<endl;
	Postorder(T);
	cout<<endl;
	cout<<"结点的个数："<<endl;
	cout<<Leaf(T)<<endl;
	cout<<"树的高度："<<endl;
	cout<<height(T)<<endl;
	cout<<endl;
	return 0;
}
//123##3##2##

