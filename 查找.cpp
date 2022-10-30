#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,x;
	int c[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c[i];
	} 
	cin>>x;
	for(int i=0;i<n;i++){
		if(x==c[i]){
			cout<<i;
			return 0;
		}
	}
} 
