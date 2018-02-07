#include "../../std_lib_facilities.h"

int main()
{
	string first;
	string second;
	cout << "Please enter FN\n";
	cin >> first;
	cout << "Please enter LN\n";
	cin >> second; // read two strings
	if (first == second) cout << "that's the same name twice\n";
	if (first < second)
		cout << first << " is alphabetically before " << second << '\n';
	if (first > second)
		cout << first << " is alphabetically after " << second << '\n';
}