#include "dz10.h"

int main() {
	cout << "Human: \n";
	Human H("Popov", "Petr", "Petrovich", 22);
	H.print();
	cout << "Student: \n";
	Student S("Olegov", "Oleg", "Olegovich", 17, 1);
	S.print();
	cout << "Boss: \n";
	Boss B("Sergeev", "Sergey", "Sergeevich", 35, 35);
	B.print();
}