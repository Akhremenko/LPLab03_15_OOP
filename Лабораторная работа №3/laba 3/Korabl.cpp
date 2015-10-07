#include<iostream>
#include"Korabl.h"


using namespace std;

Korabl::Korabl(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Korabl::printN()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;

}