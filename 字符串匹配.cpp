#include<bits/stdc++.h>
using namespace std;

int main(){
	string t,s;
	getline(cin,t); //子串 
	getline(cin,s); // 主串 
	int num=0;

	for(int i=0;i<s.length();i++){ // 在主串中找子串 
		int flag=1; // 假设是匹配的 
		for(int j=0;j<t.length();j++){
			if(t[j] != s[i+j]) flag = 0; //一旦不匹配，flag置0 
		}
		if(flag==1) num = num+1;
	}
	cout<<num;
} 
