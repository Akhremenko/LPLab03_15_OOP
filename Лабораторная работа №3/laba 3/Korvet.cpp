#include<iostream>
#include"Korvet.h"



using namespace std;

Korvet::Korvet(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Korvet::printKon()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;

}