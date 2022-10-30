#include <bits/stdc++.h>

using namespace std;

typedef struct node{
    char data;
    struct node *lchild,*rchild;
}*BitTree;

void CreateBitTree(BitTree &T)
{
    char c;
    cin >> c;
    // 输入，结点为0   eg： 123400003670000 ->1 2 3 4 3 6 7 先序遍历 
    if(c=='0') T = NULL;
    else{
        T = new node;
        T->data = c;
        CreateBitTree(T->lchild);
        CreateBitTree(T->rchild);
    }
}

void Inorder(BitTree T)
{
    if(T!=NULL){
        Inorder(T->lchild);
        cout << T->data << ' ';
        Inorder(T->rchild);
    }
}

void Preorder(BitTree T)
{
    if(T!=NULL){
        cout << T->data << ' ';
        Preorder(T->lchild);
        Preorder(T->rchild);
    }
}

void Postorder(BitTree T)
{
    if(T!=NULL){
        Postorder(T->lchild);
        Postorder(T->rchild);
        cout << T->data << ' ';
    }
}

int Leaf(BitTree T)
{
    if(T==NULL) return 0;
    if(T->lchild==NULL && T->rchild==NULL) return 1;
    return Leaf(T->lchild)+Leaf(T->rchild);
}

int Depth(BitTree T)
{
    if(T==NULL) return 0;
    int l = Depth(T->lchild);
    int r = Depth(T->rchild);
    return max(l,r)+1;
}

int main()
{
    BitTree T;
    CreateBitTree(T);
    Preorder(T); cout<<endl;
    Inorder(T); cout<<endl;
    Postorder(T); cout<<endl;
    cout << Leaf(T) << endl;
    cout << Depth(T) <<endl;
    return 0;
}
