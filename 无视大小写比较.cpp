#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int flag = 1;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.length();i++){
		if(abs(s1[i]-s2[i])!=32&&abs(s1[i]-s2[i])!=0) 
			flag =0;
	}
	if(flag==1)
		cout<<"Yes"<<endl;
} 
