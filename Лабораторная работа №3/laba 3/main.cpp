#include <iostream>
#include"Korvet.h"
#include"Transportnoe_sredstvo.h"
#include"Parusnik.h"
#include"Parahod.h"
#include"Korabl.h"
#include"Kapitan.h"

using namespace std;

Transportnoe_sredstvo* Transportnoe_sredstvo::head = NULL;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	/*Kapitan a(45, "Петр");
	Transportnoe_sredstvo b;
	Korabl c("Виктория");
	Parahod d("Аврора");
	Parusnik e("Анастасия");
	Korvet f("Полинария");

	a.printK();
	d.printT();
	b.printT();
	c.printN();
	d.printPor();
	e.printP();
	f.printKon();*/

	Parusnik a;
	Korabl c;
	Parahod d;
	Parusnik e;
	Korvet f;

	a.show();

	return 0;
}