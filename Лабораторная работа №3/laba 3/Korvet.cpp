#include<iostream>
#include"Korvet.h"

using namespace std;

Korvet::Korvet()
{
}

int Korvet::getSpeed()
{
	return speed_;
}

void Korvet::setSpeed(int speed)
{
	this->speed_ = speed;
}

void Korvet::print()
{
	cout << "�������� �������: " << getSpeed() << endl;
}

void Korvet::printKon()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;
}

