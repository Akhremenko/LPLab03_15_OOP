#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	Kapitan a(45, "����");
	Transportnoe_sredstvo b;
	Korabl c("��������");
	Parahod d("������");
	Parusnik e("���������");
	Korvet f("���������");

	a.printK();
	d.printT();
	b.printT();
	c.printN();
	d.printPor();
	e.printP();
	f.printKon();
}