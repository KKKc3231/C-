#include<iostream>
#include<string>
using namespace std;
#define MAX_NUM 10000 // 最多的学校个数 


int main(){
    int n ;
    int num,score;
    cin>>n;
    int school[n+1] = {0}; // n+1防止数组越界
	//     
    for(int i=0;i<n;i++){
    	cin>>num>>score;
    	school[num] += score; // 数组的随机存储 
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
