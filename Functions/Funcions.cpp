#include "../../std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>

using namespace std;
typedef complex<double> dcomp;

int main()			//C++ programs start by executing the function main
{

	//cout << "Please enter a floating-pount value: ";
	//double n;
	//cin >> n;
	//cout <<"n==" << n
	//	<< "\nn+1 == " << n + 1
	//	<< "\nthree times n == " << 3 * n
	//	<< "\ntwice n == " << n + n
	//	<< "\nn squared == " << n * n
	//	<< "\nhalf of n == " << n / 2
	//	<< "\nsquare root of n == " << sqrt(n)
	//	<< '\n'; // another name for newline (“end of line”) in output


	//string first_name1; // string variable
	//string last_name1; // string variable
	double value1; // integer variable
	double value2;
	double value3;
	double value4;
	double D;
	double x1;
	double x2;
	complex<double> Discriminant;
	//complex<double> D;
	//complex<double> x1;
	//complex<double> x2;
	cout << "Please enter a: (followed by 'enter'):\n";
	cin >> value1; // read a string
	cout << "Please enter b: (followed by 'enter'):\n";
	cin >> value2; // read a string
	cout << "Please enter c: (followed by 'enter'):\n";
	cin >> value3; // read a string
	value4 = (value2 * value2) - (4 * value1*value3);
	D = sqrt(value4);
	//cout << "D = " << value4 << "\n";
	//cout << "D = " << value4 << "\n";
	//x1 = (-(value2)+D) / 2 * value1;
	//x2 = (-(value2)-D) / 2 * value1;

	//if (D < 0)
	//{
		//cout << "The equation has two complex roots.\n";
		//cout << x1;
		//cout << x2;
	//	cout << "The equation has no roots.\n";
	//}
	//else if (D == 0)
	//{
	//	x1 = ((-value2) / (2 * value1));
	//	cout << "D = " << D << "\n";
	//	cout << "The equation has a single root.\n";
	//	//x1 = x2;
	//	cout << x1 << "\n";
	//}
	//else
	//{
	//	x1 = (((-value2) + D) / (2 * value1));
	//	x2 = (((-value2) - D) / (2 * value1));
	//	cout << "D = " << D << "\n";
	//	cout << "Root x1 = " << x1 << "\n";
	//	cout << "Root x2 = " << x2 << "\n";
	//}

	if (D > 0)
	{
		x1 = (((-value2) + D) / (2 * value1));
		x2 = (((-value2) - D) / (2 * value1));
		cout << "D = " << D << "\n";
		cout << "Root x1 = " << x1 << "\n";
		cout << "Root x2 = " << x2 << "\n";
	}
	else if (D == 0)
	{
		x1 = ((-value2) / (2 * value1));
		cout << "D = " << D << "\n";
		cout << "The equation has a single root.\n";
		//x1 = x2;
		cout << x1 << "\n";
	}
	else
	{
		Discriminant = sqrt(std::complex<double>(value4));
		cout << "D = " << Discriminant << "\n";
		std::complex<double> x1 = (((-value2) + sqrt(std::complex<double>(Discriminant))) / (2 * value1));
		std::complex<double> x2 = (((-value2) - sqrt(std::complex<double>(Discriminant))) / (2 * value1));
		cout << x1 << "\n";
		cout << x2 << "\n";
		//cout << "The equation has no roots.\n";
	}


	return 0;
}