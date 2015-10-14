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
	cout << "Колличество пушек на коробле:  " << getKolPushek() << endl;
}

void Korabl::printN()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;
}

