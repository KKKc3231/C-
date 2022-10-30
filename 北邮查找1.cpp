#include<iostream>
#include<string>
using namespace std;
int main(){
	int n1,n2;
	scanf("%d",&n1);
	int a[n1];
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	scanf("%d",&n2);
	int b[n2];string s[n2];
	for(int j=0;j<n2;j++){
		cin>>b[j];
	}
	for(int j=0;j<n2;j++){
		for(int i=0;i<n1;i++){
			if(b[j] == a[i]){
				s[j] = "YES";
				break;
			}else{
				s[j] = "NO";
			}
		}	
	} 
	for(int j=0;j<n2;j++){
		cout<<s[j]<<endl;
	}
}
