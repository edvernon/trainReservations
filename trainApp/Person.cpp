#include "Person.h"

using namespace std;

Person::Person()
{
	name= " ";
	age = 0; 
}

Person::Person(string name, int age)
{
	this -> age = age;
	this -> name = name;
}

int Person::getAge()
{
	return age;
}

string Person::getName()
{
	return name;
}


