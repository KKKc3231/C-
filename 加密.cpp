#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(('a'<=s[i]&&s[i]<='w')||('A'<=s[i]&&s[i]<='W'))
			s[i] = s[i]+3;  // ���߿���ֱ�Ӽ�ȥ26���������3֮������ˣ�����z����ȥ26����
		else if(s[i]=='x'||s[i]=='X'||s[i]=='y'||s[i]=='Y'||s[i]=='z'||s[i]=='Z'){
			s[i] = s[i]-23; // +3�൱��+(3-26) => -23 
	
		}
	}
	cout<<s;
	return 0;
}
