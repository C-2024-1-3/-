//student.h        
//(这是头文件，在此文件中进行类的声明)
#include<iostream>
#include<cstring>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void setvalue() {
		cout << "输入num"; cin >> num;
		cout << "输入name"; cin>>  name;
		cout << "输入sex"; cin >> sex;
		
		
	}
	int num;
	string name;
	char sex;
	Student(int num=001, string Name="myz", char sex = 'm') {
		this->num = num;
		this->name = Name;
		this->sex = sex;
	}
};
