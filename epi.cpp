/**
*This program calculates e to the pi and pi to the e,
*There is no exponentiation operator in C++. 
*To solve this issue you must use the cmath library header file which contains the pow function into your code. 
*With the pow function you can calculate a to the b power by writing pow(a,b). 
*/


#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	// Program Purpose Display 
	cout <<"This program calculates and displays the values \n" << "e to the pi, and \n" << "pi to the e." << endl << endl; 
	
	// Variables
	double e = exp(1.);
	//double pi = M_PI; 
	/***The value of this statement: M_PI is not standardized. */

	const double M_PI = 3.14159265358979;

	// Output of Program
	cout <<"e to the pi is: " << exp(M_PI) << endl << endl; 
	cout <<"pi to the e is: " << pow(M_PI,e) << endl << endl; 

}


