#include<bits/stdc++.h>
using namespace std;

int main(){
	// set
	set<string> country;
	country.insert("China");
	country.insert("American");
	country.insert("England");
	set<string>::iterator it=country.begin();
	for(it;it!=country.end();it++){
		cout<<*it<<" in the country set!"<<endl;
	}
	// eraseɾ��Ԫ�أ�һ��iteratorֻ����һ�Σ��ù�֮�󣬱���ɾ��Ԫ��֮��
	// �ٵ���iterator�ͱ������¶���������� 
	set<string>::iterator it1=country.begin();
	country.erase("England");
	for(it1;it1!=country.end();it1++){
		cout<<*it1<<" in the country set!"<<endl;
	}
	
	// map
	map<string,int> dict ;
	dict["Tom"] = 1;
	dict["KKKc"] = 2;
	dict["Bob"] = 3;
	if(dict.count("KKKc")){
		cout<< "KKKc is in class " << dict["KKKc"] <<endl;
	}
	// iteratorΪ������ itΪָ�� 
	for(map<string,int>::iterator it = dict.begin();it!=dict.end();++it){
		cout<<it->first <<" is in class " << it->second << endl;
	}
	return 0;
} 
