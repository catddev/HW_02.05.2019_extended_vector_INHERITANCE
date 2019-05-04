#include"extendedVector.h"
#include"Student.h"

int main() {

	extendedVector<int> eV;

	eV.add_pos(5, 99999);
	eV.print();

	for (int i = 0; i < 5; i++){
		eV.add_front(i + 1);
		eV.add((i + 1) * 100);
	}
	eV.print();

	eV.add_pos(7, 88888);
	eV.print();

	eV.del();
	eV.del_front();
	eV.del_pos(6);
	eV.print();


	Student s("name", "surname", 18, "smp-182", 100);
	Student s1("name", "surname", 20, "smp-182", 70);
	Student s2("name", "surname", 30, "smp-182", 90);
	extendedVector<Student> ss;
	for (int i = 0; i < 5; i++) {
		ss.add_front(s);
		ss.add(s2);
	}
	ss.add_pos(3, s1);
	ss.del_pos(10);
	//for(int i=0; i<ss.size(); i++)
	//	cout << ss[i];
	//cout << endl;

	while (!ss.empty()) {
		cout << ss[0];//printting first el
		ss.del_front();//deleting first el
	}


	system("pause");
	return 0;
}