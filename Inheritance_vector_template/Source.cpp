#include"extendedVector.h"

int main() {

	extendedVector<int> eV;

	//777???

	//for (int i = 0; i < 5; i++) {
	//	eV.add(777);//why not first?
	//	eV.add_front(i+1);
	//}

	eV.add_pos(5, 999);
	//eV.print();

	for (int i = 0; i < 5; i++){
		eV.add_front(i+1);
		//eV.add(777);
	}

	//eV.del();
	//eV.del_front();
	//eV.del_pos(9);
	eV.add_pos(7, 100000);
	cout << endl;
	eV.print();

	system("pause");
	return 0;
}