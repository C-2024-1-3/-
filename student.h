//student.h        
//(����ͷ�ļ����ڴ��ļ��н����������)
#include<iostream>
#include<cstring>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void setvalue() {
		cout << "����num"; cin >> num;
		cout << "����name"; cin>>  name;
		cout << "����sex"; cin >> sex;
		
		
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
