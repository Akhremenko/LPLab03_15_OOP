#include <iostream>
#include "Kapitan.h"


using namespace std;

Kapitan::Kapitan(int age, char* name)
{
	this->age = age;
	this->name = name;
}

Kapitan::Kapitan()
{

}

int Kapitan::getAge()
{
	return age;
}

char* Kapitan::getName()
{
	return name;
}

void Kapitan::setAge(int)
{
	this->age = age;
}
void Kapitan::setName(char*)
{
	this->name = name;
}

void Kapitan::printK()
{
	cout << "Данные капитана: " << endl;
	cout << "Возраст: " << getAge() << endl;
	cout << "Имя: " << getName() << endl;
	cout << endl;

}