
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
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;

}
void Parusnik::print()
{
	cout << "������ ����� ���������: " << getDlinaMachti() << endl;
}

