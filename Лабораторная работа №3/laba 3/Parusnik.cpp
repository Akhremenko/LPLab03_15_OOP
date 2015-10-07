
#include<iostream>
#include"Parusnik.h"


using namespace std;

Parusnik::Parusnik(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Parusnik::printP()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;

}