#include<iostream>
#include"Parahod.h"

using namespace std;

Parahod::Parahod()
{
}

Parahod::Parahod(int kolvo)
{
	this->kolTrub_ = kolvo;
}

int Parahod::getKolTrub()
{
	return kolTrub_;
}

void Parahod::setKolTrub(int KolTrub)
{
	this->kolTrub_ = KolTrub;
}

void Parahod::print()
{
	cout << "����������� ���� ��������:  " << getKolTrub() << endl;
}

void Parahod::printPor()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;
}