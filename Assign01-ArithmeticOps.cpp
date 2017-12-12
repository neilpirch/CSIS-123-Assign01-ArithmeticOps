// Assign01-ArithmeticOps.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	int iOne, iTwo;

	cout << endl << "Arithmetic Operations of Two Integers" << endl;
	cout << endl << "Enter the first integer :  ";
	cin >> iOne;
	cout << endl << "Enter the second integer:  ";
	cin >> iTwo;

	cout << endl << iOne << " + " << iTwo << " = " << iOne + iTwo << endl;
	cout << endl << iOne << " - " << iTwo << " = " << iOne - iTwo << endl;
	cout << endl << iOne << " - " << iTwo << " = " << abs(iOne-iTwo) << "       (absolute difference)" << endl;
	cout << endl << iOne << " * " << iTwo << " = " << iOne * iTwo << endl;
	cout << endl << iOne << " / " << iTwo << " = " << iOne / iTwo << endl;
	cout << endl << iOne << " % " << iTwo << " = " << iOne % iTwo << endl;


	cout << endl;
	system("pause");
	return 0;
}

