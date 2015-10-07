#include<iostream>
#include"Parahod.h"



using namespace std;

Parahod::Parahod(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Parahod::printPor()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;
}