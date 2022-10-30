#include<bits/stdc++.h>
using namespace std;
int main(){
	string num;
	cin>>num;
	vector<int> data;
	int a = num.length();
	int b[a];
	for(int i=0;i<a;i++){
		b[i] = num[i] - 48;
	}
	sort(b,b+a);
	do{
		int sum=0;
		for(int j=0;j<a;j++){
			int x = b[j]*pow(10,a-j-1);
			sum = sum+x;
		}
		if(sum%30==0 && sum!=0)
			data.push_back(sum);
	}while(next_permutation(b,b+a));   // next_permutation() 函数进行排列组合 
	
	int max_num=0;
	for(int i=0;i<data.size();i++){
		if(data[i]>max_num) max_num = data[i];
	}
	if(max_num==0){
		cout<<-1<<endl;
	}else{
		cout<<max_num<<endl;
	}
	return 0;
} 
