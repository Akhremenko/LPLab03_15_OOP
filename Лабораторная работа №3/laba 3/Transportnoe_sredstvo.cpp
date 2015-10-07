#include <iostream>
#include "Transportnoe_sredstvo.h"

using namespace std;

Transportnoe_sredstvo::Transportnoe_sredstvo(char* nazvanie)
{
	this->nazvanie = nazvanie;
}

Transportnoe_sredstvo::Transportnoe_sredstvo()
{
	this->nazvanie = "àâòïâëïæë";
}

char* Transportnoe_sredstvo::getNazvanie()
{
	return nazvanie;
}

void  Transportnoe_sredstvo::setNazvanie(char*)
{
	this->nazvanie = nazvanie;
}

void Transportnoe_sredstvo::printT()
{
	cout << "Êëàññ ñîçäàí "<< nazvanie << endl;
	cout << endl;

}