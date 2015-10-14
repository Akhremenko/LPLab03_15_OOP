#pragma once
#include "Transportnoe_sredstvo.h"

class Parusnik :public Transportnoe_sredstvo
{
	int dlinaMachti_;
public:
	Parusnik();
	void printP();
	int getDlinaMachti();
	void setDlinaMachti(int);
	//void add();
	void print();
};