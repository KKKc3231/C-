#include<bits/stdc++.h>
using namespace std;

int main(){
	string t,s;
	getline(cin,t); //�Ӵ� 
	getline(cin,s); // ���� 
	int num=0;

	for(int i=0;i<s.length();i++){ // �����������Ӵ� 
		int flag=1; // ������ƥ��� 
		for(int j=0;j<t.length();j++){
			if(t[j] != s[i+j]) flag = 0; //һ����ƥ�䣬flag��0 
		}
		if(flag==1) num = num+1;
	}
	cout<<num;
} 
