#include<bits/stdc++.h>
using namespace std;
// ����ṹ�壬������������ 
typedef struct{
	int index;
	int value;
	int score;
}sort_st;

// �Զ���ȽϺ����������Ŀ��������� 
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
	vector<sort_st> a(n);  // ��vector����Žṹ������ 
	for(int i=0;i<a.size();i++){
		a[i].index = i + 1;
		cin>>a[i].value;
		if(a[i].value == 100){
			a[i].score = 1;
		}else{
			a[i].score = a[i].value / 10 + a[i].value % 10; // �任Ϊscore 
		}
	}
	sort(a.begin(),a.end(),comp);
	for(int i=0;i<a.size();i++){
		cout<<a[i].index<<endl;
	}
	return 0;
} 
