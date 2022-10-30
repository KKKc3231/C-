#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int n;
	cin>>s;
	cin>>n;
	int a[n][4];
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	vector<char> c1;
	vector<char> c2;
	for(int i=0;i<n;i++){
		c1.clear();
		c2.clear();
		// 用两个vector来保存字串 
		for(int k=a[i][0];k<=a[i][1];k++){
			c1.push_back(s[k-1]);
		}
	
		for(int j=a[i][2];j<=a[i][3];j++){
			c2.push_back(s[j-1]);
		}
		c1.erase(unique(c1.begin(),c1.end()),c1.end());
		c2.erase(unique(c2.begin(),c2.end()),c2.end());
		
		for(int i=0;i<c1.size();i++){
			cout<<c1[i]<<endl;
		}
		for(int j=0;j<c2.size();j++){
			cout<<c2[j]<<endl;
		}
		
//		sort(c1.begin(),c1.end());
	
		// 如果第二个可以表示第一个则num==第一个的长度 
		int num=0;
		for(int i=0;i<c2.size();i++){
			for(int j=0;j<c1.size();j++){
				if(c2[i]==c1[j]) num=num+1;
			}
		}
		if(num==c1.size()) cout<<"DA"<<endl;
		else cout<<"NE"<<endl; 
		
//		break;
	}
	
	return 0;
} 
