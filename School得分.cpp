#include<iostream>
#include<string.h>
using namespace std;

// School�Ľṹ�� 
typedef struct School{
	int num;
	int score;
}School;

int main(){
	int n;
	cin>>n; 
	School school[n];
	// ����Ŀ����ѧУ��ź͵÷� 
	for(int i=0;i<n;i++){
		cin>>school[i].num>>school[i].score;
	}
	// �������¶Աȣ�numһ������뵽�ʼ��ѧУ��score�� 
	for(int i=0;i<n;i++){
		int num = school[i].num;
		int score = school[i].score;
		for(int j=i+1;j<n;j++){
			if(num == school[j].num){
				score = score + school[j].score; // �����ۼ� 
			}
		}
		school[i].score = score;
	} 
	int school_num = school[0].num;
	int max_score = school[0].score;
	// ���� 
	for(int i=1;i<n;i++){
		if(school[i].score > max_score){
			school_num = school[i].num;
			max_score = school[i].score;
		}
	}
	cout<<school_num<<" "<<max_score;
} 
