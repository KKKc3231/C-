#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	vector<int> a;
	while(scanf("%d",&n)!=EOF){
		int b[n],flag=0;
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int index=0;
		int num =0;
		for(int i=1;i<=n;i++){
			num++;
			if(b[i-1]<b[i]){
				flag = 1;
				a.push_back(b[i-1]);
			}
			else{
				flag =0;
				break;
			}
		}
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<endl;
		}	
	}
} 
