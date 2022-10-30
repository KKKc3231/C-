#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,index;
	string s;
	vector<int> a1;
	vector<int> a2;
	vector<int> temp; // 存放计算结果 
	cin>>n;
	while(n+1){
		getline(cin,s);
		if(s[0]=='P'){
			if(a1.size()!=0){
				cout<<"SIZE = "<<a1.size()<<endl;
				for(int i=0;i<a1.size();i++){
					temp[i] = a1[i]*a1[i] + a2[i]*a2[i]; // ???
//					cout<<"temp:"<<temp[i]<<endl;
				}
			}else cout<<"empty"<<endl;
		}
		if(s[0]=='I'){
			cout<<s[s.length()-1]<<" "<<s[s.length()-4]<<endl;
			a1.push_back(s[s.length()-1]);
			a2.push_back(s[s.length()-4]);
		}
		n--;
	}
	
	return 0;
} 
