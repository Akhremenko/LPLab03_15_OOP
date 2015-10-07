#pragma once

class Transportnoe_sredstvo
{
	char* nazvanie;
public:
	Transportnoe_sredstvo(char*);
	Transportnoe_sredstvo();
	char* getNazvanie();
	void setNazvanie(char*);
	void printT();
	Transportnoe_sredstvo* next;
protected:
	static Transportnoe_sredstvo* head;
};