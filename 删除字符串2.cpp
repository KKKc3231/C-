#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string s1;
	getline(cin,s);
	int flag[s.size()] = {0}; // flag数组 
	// 都先转换成小写，减少比较次数
	string t=s;  // 需要赋值一份，因为原来的s大写变小写了 
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z')
			s[i] = s[i]+32; 
	} 

	for(int i=0;i<s.size();i++){
//		if((s[i]=='G'||s[i]=='g')&&(s[i+1]=='Z'||s[i+1]=='z')&&(s[i+2]=='U'||s[i+2]=='u')){
		if(s[i]=='g'&&s[i+1]=='z'&&s[i+2]=='u'){ // 减少比较次数！！！ 
			flag[i]=flag[i+1]=flag[i+2]=1;
		}
	}
	
	// 打印一下flag 
	/*
	for(int i=0;i<s.size();i++)
		cout<<flag[i]<<"";
	*/
	for(int i=0;i<s.size();i++){
		if(flag[i]==0)
			cout<<t[i];
	}
} 
