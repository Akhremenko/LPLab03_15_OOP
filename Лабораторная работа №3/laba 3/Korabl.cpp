#include<iostream>
#include"Korabl.h"

using namespace std;

Korabl::Korabl()
{
	kolPushek_ = rand() % 10;
	add();
}

int Korabl::getKolPushek()
{
	return kolPushek_;
}

void Korabl::setKolPushek(int kolPushek)
{
	this->kolPushek_ = kolPushek;
}

void Korabl::print()
{
	cout << "Корабль " << getKolPushek() << endl;
}

void Korabl::printN()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;
}

void Korabl::add()
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