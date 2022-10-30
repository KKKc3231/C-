#include<iostream>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
    // 需要判断首字母是否为大写字母
	if('a'<=s[0]&&s[0]<='z') // 'a'<=s[i]<='b' => 中间要用&&连接，不能直接'a'<=s[i]<='b'!!!
		s[0] = char(s[0]-32); // 第一个字母转换为大写; 
	for(int i=1;i<s.length();i++){
		if((s[i]==' ')||(s[i]=='\t')||(s[i]=='\r')||(s[i]=='\n')){
			if('a'<=s[i+1]&&s[i+1]<='z') 
				s[i+1] = s[i+1]-32;
		}
	}
    cout<<s<<endl;
    s.clear(); // 清空数据 
	}
	return 0;
}
