// prova.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number, hours;
    double value, SALARY;
    cin >> number;
    cin >> hours;
    cin >> value;

    SALARY = value * hours;

    cout << "NUMBER = " << number << fixed << setprecision(2) << "\nSALARY = U$ " << (value * hours) << endl;
}
