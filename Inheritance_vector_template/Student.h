#pragma once;
#include"human.h"//������������ �����

//��������� ����� ������ ��� ��������� � ����� �������� ������������� ������! � ������� ���� �����, ������ �� �����������!


//����������� �� ������ ������ ������������, ���� �������� public �� ��� ������ �� ������������� public ����������� ��� public
// class Student: private Human
class Student :public Human {
private:
	string group;
	int grade;
public:
	/*void print() {
		cout << this->name << " " << surname << " " << age << endl;
	}*/
	Student() : Human() {}
	//������������ ��� ��������� � ����� ����������� ��������!
	Student(string name, string surname, int age, string group, int grade) :Human(name, surname, age) {
		this->group = group;
		this->grade = grade;
	}
	//����� ��� ������� ����� ���� �����(), �� ������������ ����� ��������������
	//�� ���� ��� ������� �� �������, �� ������������ ����� ����� ��������
	void print();

	friend ostream& operator<<(ostream & os, Student obj);
};
ostream& operator<<(ostream & os, Student obj);