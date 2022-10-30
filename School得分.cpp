#include<iostream>
#include<string.h>
using namespace std;

// School的结构体 
typedef struct School{
	int num;
	int score;
}School;

int main(){
	int n;
	cin>>n; 
	School school[n];
	// 按题目输入学校编号和得分 
	for(int i=0;i<n;i++){
		cin>>school[i].num>>school[i].score;
	}
	// 从上往下对比，num一样则加入到最开始的学校的score中 
	for(int i=0;i<n;i++){
		int num = school[i].num;
		int score = school[i].score;
		for(int j=i+1;j<n;j++){
			if(num == school[j].num){
				score = score + school[j].score; // 分数累加 
			}
		}
		school[i].score = score;
	} 
	int school_num = school[0].num;
	int max_score = school[0].score;
	// 排序 
	for(int i=1;i<n;i++){
		if(school[i].score > max_score){
			school_num = school[i].num;
			max_score = school[i].score;
		}
	}
	cout<<school_num<<" "<<max_score;
} 
