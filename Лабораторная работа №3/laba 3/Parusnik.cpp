
#include<iostream>
#include"Parusnik.h"

using namespace std;

Parusnik::Parusnik()
{
	dlinaMachti_ = rand() % 10;
	add();
}

int Parusnik::getDlinaMachti()
{
	return dlinaMachti_;
}

void Parusnik::setDlinaMachti(int dlinaMachti)
{
	this->dlinaMachti_ = dlinaMachti;
}

void Parusnik::printP()
{
	cout << "Название корабля: " << getNazvanie() << endl;
	cout << endl;

}
void Parusnik::print()
{
	cout << "Парусник " << getDlinaMachti() << endl;
}

void Parusnik::add()
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