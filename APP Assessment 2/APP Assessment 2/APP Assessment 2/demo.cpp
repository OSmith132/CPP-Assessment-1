#include <iostream>
#include "reg.h"
using namespace std;



int main() // main class
{
	Registration myCode;
	cout << "Registration:\n";
	if (myCode.input())
	{
		cout << "Registered successfully.\n";
		cout << "The input code is " << myCode.getCode() << "\n";
		cout << "The system has been updated with ";
		myCode.output();
	}
	else
	{
		cout << "Register unsuccessfull.\n";
		cout << "Your input code " << myCode.getCode() << " doesn't match the access code\n";
		cout << "The system has been updated with ";
		myCode.output();
		
	}
	return 0;
}




