#include <iostream>
#include"student.h"             
using namespace std;

void Student::display()         
{
	cout << "num��" << num << endl;
	cout << "name��" << name << endl;
	cout << "sex��" << sex << endl;
}
void Student::set_value()
{
	cout << "The age of the student is:";
	cin >> num;
	cout << "The name of the student is:";
	cin >> name;
	cout << "The sex of the student is:";
	cin >> sex;
}

                     
#include <iostream>             
#include "student.h"
int main()
{
	Student stud;               

	stud.set_value();

	stud.display();              
	return 0;
}