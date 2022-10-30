#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string s1;
	int n;
	cin>>s;
	cin>>n;
	string temp[n];
	int a[3];
	int j = 3;
	int num=0;
	while(num!=n){
		cin>>s1;
		// char to num 
		for(int i=0;i<3;i++){
			a[i] = s1[i]-48;
		}
		if(a[0]==0){
			for(int j=a[1];j<a[2];j++){
				if(j<a[2]-j-1){
					swap(s[j],s[a[2]-j-1]); // 两端依次交换并++ 
				}
			}
			temp[num++] = s;
		}
	
		if(a[0]==1){
			for(int i=a[1];i<=a[2];i++){
				s[i] = s1[j]; // 赋值 
				j++;
			}
			temp[num++] = s;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<temp[i]<<endl;
	}
} 
