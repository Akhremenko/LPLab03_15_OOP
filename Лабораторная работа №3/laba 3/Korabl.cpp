#include<iostream>
#include"Korabl.h"

using namespace std;

Korabl::Korabl()
{
}

int Korabl::getKolPushek()
{
	return kolPushek_;
}

void Korabl::setKolPushek(int kolPushek)
{
	this->kolPushek_ = kolPushek;
}

void Korabl::print()
{
	cout << "����������� ����� �� �������:  " << getKolPushek() << endl;
}

void Korabl::printN()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;
}

