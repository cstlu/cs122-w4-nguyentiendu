//#include "SoHang.h"
#include "DaThuc.h"
#include <iostream>
using namespace std;

int main()
{
	DaThuc a(5);
	a.setHeso(0, 1);
	a.setHeso(1, 2);
	a.setHeso(2, 4);
	a.setHeso(4, 4);
	a.setHeso(5, 3);
	a.display();
	DaThuc b(3);
	cout <<"*"<< endl;
	b.setHeso(0, 3);
	b.setHeso(1, 3);
	b.setHeso(3, 3);
	b.display();
	cout << "kq:= ";
	DaThuc kq = a * b;
	//DaThuc kq2 = a - b;
	kq.display();
	//kq2.display();
	return 0;
}