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
	Kapitan a(45, "Петр");
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
	f.printKon();
}