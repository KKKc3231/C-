#include<iostream>
#include<string.h>
#include<vector> 
using namespace std;

char s[6]; // ���5���ַ�
char t[81];
int main(){
	vector<char> a; //
	vector<int> b;
	while(1){
		// ���ո�Ҳ���ַ���ʱ��ʹ��gets()
		gets(s);
		if(s[0]=='#'){
			// ����ĿҪ�����������vector�洢������
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
			// ����vector
			a.push_back(s[i]);
			b.push_back(num);
		}
	}
	return 0;
}

