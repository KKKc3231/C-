#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int n;
	int ans;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(gcd(a[i],a[j]) == 1) ans++;
		}
	}
	cout<<ans<<endl;
	
} 
