#include<iostream>
#include"Korabl.h"


using namespace std;

Korabl::Korabl(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Korabl::printN()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;

}