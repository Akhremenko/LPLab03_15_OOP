
#include<iostream>
#include"Parusnik.h"


using namespace std;

Parusnik::Parusnik(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Parusnik::printP()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;

}