#pragma once
#include <iostream>
using namespace std;

class Registration  // a class used for checking if the inputed access code is correct and storing the value of the result
{
public:
	bool input(); // Sets the 'code' property to the user's input and used checkCode() to compare it to the access code
	void output(); // Outputs the value for the 'attend' property to the console 
	void setRecord(bool index); // Sets the value of attend to either 1 or 0 depending on the value of the argument index
	int getCode(); // returns the value of the property 'code'
	//Returns the input code
private:
	bool checkCode(); // checks the input matches the access code
	int code; // The code the user input
	int attend; // 1 = code validation successful    0 = code vaidation unsuccessful
};