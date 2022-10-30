#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num;
	scanf("%d",&num);
	if(int(sqrt(num))*int(sqrt(num)) == num) cout<<"True";
	else cout<<"False";
} 
