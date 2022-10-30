#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct stu{
	int id;
	string name;
	int score;
}stu,*STU;

bool comp(stu s1,stu s2){
	return s1.score>s2.score;
}

int main(){
	int n;
	scanf("%d",&n);
	vector<stu> Stu(n);
	for(int i=0;i<Stu.size();i++){
		cin>>Stu[i].id>>Stu[i].name>>Stu[i].score;
	}
	sort(Stu.begin(),Stu.end(),comp);
	for(int i=0;i<Stu.size();i++){
		cout<<"id:"<<Stu[i].id<<" name:"<<Stu[i].name<<" score:"<<Stu[i].score<<endl;
	}
	return 0;
}
