#include<bits/stdc++.h>
using namespace std;
int main(){
	int H;
	int a[3],v[3];
	scanf("%d",&H);
	for(int i=0;i<3;i++){
		cin>>a[i];
	} 
	for(int i=0;i<3;i++){
		cin>>v[i];
	}
	int t,h;
	t = abs(a[0]) / v[0];
	h = a[2] + t*v[2];
	if(h>=H) cout<<"Y"<<endl;
	else cout<<"N"<<endl;
	return 0;
} 
