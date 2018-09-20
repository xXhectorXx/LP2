#include <iostream>
#include "student.h"

Student::Student(std::string pname,int page, std::string pcode)
{
	name= pname;
	age= page;
	code= pcode;
}
Student::~Student()
{

}
std::ostream & operator <<(std::ostream & os, const Student & s)
{
   	os<< s.name << s.age << s.code;
   	return os;
}

void Student::study()
{
	std:: cout<<"Soy "<<name <<" y tengo "<<age << " anios y me gusta "<<code <<std::endl;
}

