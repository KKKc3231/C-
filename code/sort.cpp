#include<bits/stdc++.h>
using namespace std;
#define MAX 10
vector<int> temp;
// 搭配sort函数使用，自定义降序！！！ 
int cmp(int a,int b){
	return a>b;
} 
int main(){
	int a[MAX][MAX];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	// 求行和列的加和 
	int dui_sum = 0;
	for(int i=0;i<n;i++){
		int row_sum=0;
		int col_sum=0;
		dui_sum = dui_sum + a[i][i];
		for(int j=0;j<n;j++){
			row_sum = row_sum + a[i][j];
			col_sum = col_sum + a[j][i];
		}
		temp.push_back(row_sum);
		temp.push_back(col_sum);
	}
	temp.push_back(dui_sum); // 添加主对角线的和 
	sort(temp.begin(),temp.end(),cmp); // 排序 
	// 打印temp的值 
//	for(int i=0;i<temp.size();i++){
//		cout<<temp[i]<<endl;
//	}
	// 使用迭代器来遍历vector 
	for(vector<int>::iterator it = temp.begin();it!=temp.end();it++){
		cout<<*it<<endl;
	} 
	return 0;
}
