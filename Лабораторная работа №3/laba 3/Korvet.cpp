#include<iostream>
#include"Korvet.h"



using namespace std;

Korvet::Korvet(char* nazvanie) :Transportnoe_sredstvo(nazvanie)
{

}

void Korvet::printKon()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;

}