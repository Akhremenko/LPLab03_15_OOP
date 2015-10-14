
#include<iostream>
#include"Parusnik.h"

using namespace std;

Parusnik::Parusnik()
{
}

int Parusnik::getDlinaMachti()
{
	return dlinaMachti_;
}

void Parusnik::setDlinaMachti(int dlinaMachti)
{
	this->dlinaMachti_ = dlinaMachti;
}

void Parusnik::printP()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;

}
void Parusnik::print()
{
	cout << "Длинна мачты парусника: " << getDlinaMachti() << endl;
}

