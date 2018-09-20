#include<iostream>
#include "my_vector.h"
#include "student.h"
int main()
{

	Student s1 = Student("Jhoel",17,"Programing");
	Student s2 = Student("Daniela",18,"Programing");
	Student s3 = Student("Eliana",25,"Programing");

	s1.study();
	s2.study();

	system ("pause");

	my_vector<Student> estudiantes;


	return 0;

}
