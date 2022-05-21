## 2、华科有效的IP地址

Time Limit: 1000 ms
Memory Limit: 256 mb

输入一个ip地址串，判断是否合法

**输入描述:**

```
每行有一个IP地址，IP地址的形式为a.b.c.d，其中a、b、c、d都是整数。
```

**输出描述:**

```
可能有多组测试数据，对于每组数据，如果IP地址合法则输出"Yes!”，否则输出"No!”。

合法的IP地址为：
a、b、c、d都是0-255的整数。
```

##### 输入输出样例:

**输入样例#:**

```
255.255.255.255
```

###### 输出样例#:

```
Yes!
```

## 2、Mycode

```c++
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
```

