#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i]; 
	}
	int score=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<s[i].length();j++){
			if(s[i][j]=='J') score = score+1;
			if(s[i][j]=='K') score = score+3;
			if(s[i][j]=='A') score = score+4;
			if(s[i][j]=='Q') score = score+2;		
		}
	}
	cout<<score<<endl;
} 
