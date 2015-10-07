#include <iostream>
#include "Transportnoe_sredstvo.h"

using namespace std;

Transportnoe_sredstvo::Transportnoe_sredstvo(char* nazvanie)
{
	this->nazvanie = nazvanie;
}

void Transportnoe_sredstvo::show()
{
	Transportnoe_sredstvo* t = head;
	while(t)
	{
		t->print();		// ����� ������� ������ ������� �� ������
		t = t->next;
	}
}

Transportnoe_sredstvo::Transportnoe_sredstvo()
{
	this->nazvanie = "���������";
}

char* Transportnoe_sredstvo::getNazvanie()
{
	return nazvanie;
}

void  Transportnoe_sredstvo::setNazvanie(char*)
{
	this->nazvanie = nazvanie;
}

void Transportnoe_sredstvo::printT()
{
	cout << "����� ������ "<< nazvanie << endl;
	cout << endl;

}