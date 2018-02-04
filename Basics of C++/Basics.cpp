#include "../../std_lib_facilities.h"

int main()			//C++ programs start by executing the function main
{

	cout << "Hello, Beagle\n";		// output "Hello, Beagle!"
									// return 0;

	cout << "Please enter your first name (followed by 'enter'):\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Hello, " << first_name << "!\n";

	cout << "Please enter your first name and age\n";
	string first_name1; // string variable
	string last_name1; // string variable
	double age; // integer variable
	double month_age;
	cin >> first_name1; // read a string
	cin >> last_name1; // read a string
	cin >> age; // read an integer
	month_age = age * 12;
	cout << "Hello, " << first_name1 << " (age " << age << " " << month_age << ")\n";
}