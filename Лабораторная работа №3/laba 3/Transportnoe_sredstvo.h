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
	virtual void print() = 0;
	void add();		// �������� ������� � ������
	static void show();		// ������� ���� ������
	Transportnoe_sredstvo* next;
protected:
	static Transportnoe_sredstvo* head;
};