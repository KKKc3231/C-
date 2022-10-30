#include<bits/stdc++.h>
using namespace std;
// 定义结构体，用来进行排序 
typedef struct{
	int index;
	int value;
	int score;
}sort_st;

// 自定义比较函数，针对题目的三种情况 
int comp(sort_st a,sort_st b){
	if(a.score > b.score)
		return (a.score > b.score);
	if(a.score == b.score && (a.value != b.value))
	 	return (a.value > b.value);
	else return (a.index < b.index);
}

int main(){
	int n;
	scanf("%d",&n);
	vector<sort_st> a(n);  // 用vector来存放结构体数组 
	for(int i=0;i<a.size();i++){
		a[i].index = i + 1;
		cin>>a[i].value;
		if(a[i].value == 100){
			a[i].score = 1;
		}else{
			a[i].score = a[i].value / 10 + a[i].value % 10; // 变换为score 
		}
	}
	sort(a.begin(),a.end(),comp);
	for(int i=0;i<a.size();i++){
		cout<<a[i].index<<endl;
	}
	return 0;
} 
