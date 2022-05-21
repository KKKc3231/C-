#include<bits/stdc++.h>
using namespace std;

int main(){
	// 定义a,b,c,d来分别表示IP地址
    int a,b,c,d;
    while(scanf("%d.%d.%d.%d",&a,&b,&c,&d)!=EOF){
        if(a>=0&&a<=255&&b>=0&&b<=255&&c>=0&&c<=255&&d>=0&&d<=255)
        {
            cout<<"Yes!"<<endl;
        }else
            cout<<"No!"<<endl;
    }
    return 0;
}
