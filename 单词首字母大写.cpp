#include<iostream>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
    // ��Ҫ�ж�����ĸ�Ƿ�Ϊ��д��ĸ
	if('a'<=s[0]&&s[0]<='z') // 'a'<=s[i]<='b' => �м�Ҫ��&&���ӣ�����ֱ��'a'<=s[i]<='b'!!!
		s[0] = char(s[0]-32); // ��һ����ĸת��Ϊ��д; 
	for(int i=1;i<s.length();i++){
		if((s[i]==' ')||(s[i]=='\t')||(s[i]=='\r')||(s[i]=='\n')){
			if('a'<=s[i+1]&&s[i+1]<='z') 
				s[i+1] = s[i+1]-32;
		}
	}
    cout<<s<<endl;
    s.clear(); // ������� 
	}
	return 0;
}
