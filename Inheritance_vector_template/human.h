#pragma once
#include<string>
#include<iostream>
using namespace std;

class Human {
protected: //����� � ��������� ������ private �������� ������������� ��� public � �� private � ���� �������� ������� ��������� ������
	string name;
	string surname;
	//private:
	int age;
public:
	Human();
	Human(string name, string surname, int age);
	void print() {
		cout << name << " " << surname << " " << age << endl;
	}

	string getName();
	string getSurname();
	int getAge();

	void setName(string n);
	void setSurname(string sn);
	void setAge(int age);

};