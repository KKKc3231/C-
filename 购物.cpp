#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<string> name;
	vector<int> num;
	string s;
	int n; 
	while(1){
		cin>>s;
		if(s=="#") break;
		else{
			cin>>n;
			name.push_back(s);
			num.push_back(n);
		}
	}
	for(int i=0;i<name.size();i++){
		cout<<name[i]<<endl;
		for(int j=0;j<num[i];j++){
			cout<<"*";
		} 
		cout<<endl;
	}
} 
