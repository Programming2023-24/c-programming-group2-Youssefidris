// Joe's Pizza.cpp : This file contains the 'main' function. Program execution begins and ends there.
#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
   
    double diameter, radius, slice_area, number_of_slices;
    cout << "Enter the pizza diameter (in inches)";
    cin >> diameter;

   
    radius = diameter / 2;
    slice_area = 14.125;

    number_of_slices =  M_PI * (radius * radius) / slice_area;

    
    cout << "Cut this pizza into " << number_of_slices<< endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
