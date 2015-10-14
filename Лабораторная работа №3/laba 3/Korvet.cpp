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
	cout << "Скорость корвета: " << getSpeed() << endl;
}

void Korvet::printKon()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;
}

