#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,sum;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sum = 0;
	for(int i=0;i<n;i++){
		sum = a[i]*pow(10,n-1-i) + sum;
	}
	int ans;
	ans = sum + 1;
	cout<<ans; 
} 
