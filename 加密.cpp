#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(('a'<=s[i]&&s[i]<='w')||('A'<=s[i]&&s[i]<='W'))
			s[i] = s[i]+3;  // 或者可以直接减去26，如果加上3之后溢出了，比如z，减去26即可
		else if(s[i]=='x'||s[i]=='X'||s[i]=='y'||s[i]=='Y'||s[i]=='z'||s[i]=='Z'){
			s[i] = s[i]-23; // +3相当于+(3-26) => -23 
	
		}
	}
	cout<<s;
	return 0;
}
