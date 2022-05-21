## 1、C++万能头文件

在机试的时候使用万能头文件，几乎包括了所有的头文件

```c++
#include<bits/stdc++.h>
using spacename std;
```

## 2、C++中的一些容器

在C++ 中容器被定义为：在数据存储上，有一种对象类型，它**可以持有其它对象或指向其它对像的指针**，这种对象类型就叫做容器，容器还有另一个特点是容器可以自行扩展。在解决问题时我们常常不知道我们需要存储多少个对象，也就是说我们不知道应该创建多大的内存空间来保存我们的对象。

STL 对定义的通用容器分三类：**顺序性容器、关联式容器和容器适配器**

顺序性的：vector（数组）、list（链表）

关联性的：set、map、multiset（允许有重复值）、multimap（允许有重复值）

- vector<> ：用来动态的存储数组，vector的一些基本操作

```c++
// 初始为空的vector
vector<int> a;
vector<string> b;
// 初始不为空的vector
vector<int> a(10); // 10个0
vector<int> a(10,3); // 10个3
vector<string> b(10,"hello"); // 10个hello
a.push_back(100); //添加元素
int size = a.size(); // 获取元素的个数
```

- stack<>：栈
- queue<>：队列
- priority_queue<>：优先队列，优先队列的一个优点是会自动的进行排序，是从大到小进行排序

**栈**：先进后出的数据结构，在c++中呢，其数据结构定义在`#include<stack>`头文件中

**队列**：先进先出的数据结构，`#include<queue>`头文件中

**优先队列**：也在`#include<queue>`头文件中

```c++
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	stack<int> a;
	queue<int> b;
	b.push(1);
	b.push(2);
	b.push(3);
	cout<<"The queue:"<<endl;
	while(!b.empty()){
		cout<<b.front()<<endl; // 取出队头元素 
		b.pop(); // 队头元素出队 
	} 
	cout<<"The stack:"<<endl;
	a.push(1);
	a.push(2);
	a.push(10);
	a.push(5);
	while(!a.empty()){
		cout<<a.top()<<endl; // 取出栈顶元素 
		a.pop(); // 栈顶元素出栈 
	}
	return 0;
}
```

- 

  

## 3、迭代器iterator

迭代器iterator是c++ STL的组件之一，作用是用来**遍历容器**，是通用的遍历容器的方法，对于所有的数据结构都适用

```c++
// 对已有的容器进行遍历，以vec为例
for(vector<int>::iterator it = vec.begin();it!=vec.end();it++){
    cout<<*it<<endl; 
}
```

在上述代码中，it为指向容器中每一个元素的指针，`*it`可取到其值。其他的容器类似，有的不太一样，以map再举例子：

```c++
for(map<string,int>::iterator it = dict.begin();it!=dict.end();it++){
	cout<<it->first<<" in class " << it->second <<endl;
    // 对于map来说是一个映射，是一对一对的键值对，所以迭代器的it的指针有两个成员，一个为string,一个int,键——值
}
```

**map迭代器的例子**：

```c++
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
	map<string,int> dict ;
	dict["Tom"] = 1;
	dict["KKKc"] = 2;
	dict["Bob"] = 3;
	if(dict.count("KKKc")){
		cout<< "KKKc is in class " << dict["KKKc"] <<endl;
	}
	// iterator为迭代器 it为指针,有两个成员变量；
	for(map<string,int>::iterator it = dict.begin();it!=dict.end();++it){
		cout<<it->first <<" is in class " << it->second << endl;
	}
	return 0;
} 
```

且迭代器只能使用一次，如果删除了元素，则需要重新定义iterator，如下是一个例子

```c++
#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	set<string> country;
	country.insert("China");
	country.insert("American");
	country.insert("England");
	set<string>::iterator it=country.begin();
	for(it;it!=country.end();it++){
		cout<<*it<<" in the country set!"<<endl;
	}
	// erase删除元素，一个iterator只能用一次，用过之后，比如删除元素之后
	// 再调用iterator就必须重新定义迭代器！ 
	set<string>::iterator it1=country.begin();
	country.erase("England");
	for(it1;it1!=country.end();it1++){
		cout<<*it1<<" in the country set!"<<endl;
	}
    return 0;
}
```

