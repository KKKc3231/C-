#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string s1;
	getline(cin,s);
	int flag[s.size()] = {0}; // flag���� 
	// ����ת����Сд�����ٱȽϴ���
	string t=s;  // ��Ҫ��ֵһ�ݣ���Ϊԭ����s��д��Сд�� 
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z')
			s[i] = s[i]+32; 
	} 

	for(int i=0;i<s.size();i++){
//		if((s[i]=='G'||s[i]=='g')&&(s[i+1]=='Z'||s[i+1]=='z')&&(s[i+2]=='U'||s[i+2]=='u')){
		if(s[i]=='g'&&s[i+1]=='z'&&s[i+2]=='u'){ // ���ٱȽϴ��������� 
			flag[i]=flag[i+1]=flag[i+2]=1;
		}
	}
	
	// ��ӡһ��flag 
	/*
	for(int i=0;i<s.size();i++)
		cout<<flag[i]<<"";
	*/
	for(int i=0;i<s.size();i++){
		if(flag[i]==0)
			cout<<t[i];
	}
} 
