#include<iostream>
#include<string.h>
#include<vector> 
using namespace std;

char s[6]; // 最多5个字符
char t[81];
int main(){
	vector<char> a; //
	vector<int> b;
	while(1){
		// 当空格也算字符的时候使用gets()
		gets(s);
		if(s[0]=='#'){
			// 按题目要求输出对两个vector存储的内容
            for(int i=0;i<a.size();i++){
            	cout<<a[i]<<" "<<b[i]<<endl;
			}
			break;
		}
		gets(t);
		for(int i=0;i<strlen(s);i++){
			int num = 0;
			for(int j=0;j<strlen(t);j++){
				if(s[i]==t[j]) num += 1;
			}
			// 填入vector
			a.push_back(s[i]);
			b.push_back(num);
		}
	}
	return 0;
}

