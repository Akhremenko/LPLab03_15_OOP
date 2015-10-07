#pragma once

class Kapitan
{
	int age;
	char* name;

public:
	Kapitan(int, char*);
	Kapitan();
	int getAge();
	void setAge(int);
	char* getName();
	void setName(char*);
	void printK();
};
