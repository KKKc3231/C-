#include<iostream>
using namespace std;
typedef long long ll; 
bool isAllsqurenumber(ll num){
	ll left=0;
	ll right=num;
	ll mid,squre;
	while(left<=right){
		mid = (left+right)>>1;
		squre = mid*mid;
		if(squre > num){
			right = mid - 1;
		}else if(squre < num){
			left = mid + 1;
		}else{
			return true;
		}
	}
	return false;
} 
int main(){
	int num;
	cin>>num;
	if(isAllsqurenumber(num)) cout<<"Yes";
	else cout<<"No";
	return 0;
} 
