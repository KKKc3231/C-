#include<iostream>
using namespace std;
// gcd���� 
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main(){
	int a,b;
	cin>>a>>b;
	int A,B;
	A = a / gcd(a,b);
	B = b / gcd(b,a);
	if(A==a && B == b){
		cout<<"����Լ��"<<endl;
	}else{
		cout<<"��Լ��"<<endl;
	}
	cout<<"result:"<<A<<"/"<<B<<endl; 
} 

