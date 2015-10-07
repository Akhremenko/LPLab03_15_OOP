#include<iostream>
#include"Korvet.h"

using namespace std;

Korvet::Korvet()
{
	speed_ = rand() % 10;
	add();
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
	cout << "Корвет " << getSpeed() << endl;
}

void Korvet::printKon()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;
}

void Korvet::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Transportnoe_sredstvo* q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
				q = q->next;
			q->next = this;
			this->next = NULL;
		}
	}
}