#include<iostream>
#include"Parahod.h"



using namespace std;

Parahod::Parahod(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Parahod::printPor()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;
}