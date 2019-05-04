#include"extendedVector.h"

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

	system("pause");
	return 0;
}