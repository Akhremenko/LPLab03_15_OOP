#include<iostream>
#include"Parahod.h"

using namespace std;

Parahod::Parahod()
{
	kolTrub_ = rand() % 10;
	add();
}

int Parahod::getKolTrub()
{
	return kolTrub_;
}

void Parahod::setKolTrub(int KolTrub)
{
	this->kolTrub_ = KolTrub;
}

void Parahod::print()
{
	cout << "������� " << getKolTrub() << endl;
}

void Parahod::printPor()
{
	cout << "�������� �������: " << getNazvanie() << endl;
	cout << endl;
}
void Parahod::add()
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