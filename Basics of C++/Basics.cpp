#include "../../std_lib_facilities.h"

int main()			//C++ programs start by executing the function main
{

	/*cout << "Hello, Beagle\n";		// output "Hello, Beagle!"
									// return 0;

	cout << "Please enter your first name (followed by 'enter'):\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Hello, " << first_name << "!\n";

	
	string first_name1; // string variable
	string last_name1; // string variable
	double age; // integer variable
	double month_age;
	cout << "Please enter your first name (followed by 'enter'):\n";
	cin >> first_name1; // read a string
	cout << "Please enter your last name (followed by 'enter'):\n";
	cin >> last_name1; // read a string
	cout << "Please enter your age\n";
	cin >> age; // read an integer
	month_age = age * 12;
	cout << "Hello, " << first_name1 << " " << last_name1 << " (age " << age << " " << month_age << ")\n";
*/
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	while (cin >> current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}