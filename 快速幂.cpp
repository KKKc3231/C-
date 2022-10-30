#include<iostream>
using namespace std;
typedef long long ll; 

const ll M=233333;
// ¿ìËÙÃÝ 
ll quickpow(ll a,ll n){
	ll ans = 1;
	while(n){
		if(n&1){
			ans = ans * a % M;
		}
		a=a*a % M;
		n>>=1;
	}
	return ans;
} 
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<quickpow(a,b)<<endl;
	return 0;
} 
