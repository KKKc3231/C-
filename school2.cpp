#include<iostream>
#include<string>
using namespace std;
#define MAX_NUM 10000 // ����ѧУ���� 


int main(){
    int n ;
    int num,score;
    cin>>n;
    int school[n+1] = {0}; // n+1��ֹ����Խ��
	//     
    for(int i=0;i<n;i++){
    	cin>>num>>score;
    	school[num] += score; // ���������洢 
	}
	int k = 1,max = -1;
	for(int i=0;i<n;i++){ //
		if(school[i]>max){
			max = school[i];  
			k=i;
		}
	}
	cout<<k<<" "<<max;
}
