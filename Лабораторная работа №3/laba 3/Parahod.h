#pragma once
#include "Transportnoe_sredstvo.h"

class Parahod :public Transportnoe_sredstvo
{
	int kolTrub_;
public:
	Parahod();
	Parahod(int);
	void printPor();
	void print();
	int getKolTrub();
	void setKolTrub(int);
};
