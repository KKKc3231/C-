#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,j,k;
	int n;
	int cost;
	cin>>n;
	for(int i=0;i<(n/5);i++){
		for(int j=0;j<(n/3);j++){
			k = 100-i-j;
			cost = 15*i+9*j+1*k;
			if((cost)<=3*n){		
//				cout<<"x="<<i<<",y="<<j<<",z="<<k<<endl;
				printf("x=%d,y=%d,z=%d\n",i,j,k);
			}
		}
	}
} 
