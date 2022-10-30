#include<iostream>
#include <string>
#include <list>

//list容器 排序案例 对于自定义数据类型 做排序

//按照年龄进行升序，如果年龄相同按照身高进行降序

class Person
{
	private:
	    int m_Age;   //年龄
		int m_Height; // 身高
		string m_Name; //姓名

	public:
		Person();
		~Person();
		Person(string name,int age,int height);
};

Person::Person(string name,int age,int height){
	m_Name = name;
	m_Age = age;
	m_Height = height;
}

//指定排序规则
bool comparePerson(Person &p1,Person &p2)
{
	//按照年龄 升序
	if (p1.m_Age == p2.m_Age)
	{
		//年龄相同  按照身高降序
		return p1.m_Height > p2.m_Height;
	}
	else
	{
		return  p1.m_Age < p2.m_Age;
	}

}

void test01()
{
	list<Person>L; //创建容器

	//准备数据
	Person p1 = Person("刘备", 35, 175);
	Person p2 = Person("曹操", 45, 180);
	Person p3 = Person("孙权", 40, 170);
	Person p4 = Person("赵云", 25, 190);
	Person p5 = Person("张飞", 35, 160);
	Person p6 = Person("关羽", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
	}

	//排序
	cout << "---------------------------------" << endl;
	cout << "排序后：" << endl;

	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名： " << (*it).m_Name << " 年龄： " << it->m_Age << " 身高： " << it->m_Height << endl;
	}
}

int main() {

	test01();

	system("pause");

	return 0;
}
