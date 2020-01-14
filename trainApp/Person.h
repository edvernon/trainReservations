#ifndef person_h
#define person_h
#include <string>
using std::string;

class Person{

protected:
	string name;
	int age;

public:
	Person();
	Person(string, int);
	int getAge();
	string getName();

};
#endif