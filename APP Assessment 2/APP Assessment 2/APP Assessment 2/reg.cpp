#include "reg.h"

/// <summary>
/// Outputs the value for the 'attend' property to the console 
/// </summary>
void Registration::output()
{
	cout << "attend = " << attend << endl;
}

/// <summary>
/// Sets the 'code' property to the user's input and used checkCode() to compare it to the access code
/// </summary>
/// <returns></returns>
bool Registration::input()
{
	cout << "Enter the access code: ";
	cin >> code;
	if (checkCode())
	{
		setRecord(true);
		return true;
	}
	else
	{
		setRecord(false);
		return false;
	}
}

/// <summary>
/// Sets the value of attend to either 1 or 0 depending on the value of the argument index
/// </summary>
/// <param name="index"></param>
void Registration::setRecord(bool index)
{
	if (index)
		attend = 1;
	else
		attend = 0;
}

/// <summary>
/// checks the input matches the access code
/// </summary>
/// <returns></returns>
bool Registration::checkCode()
{
	int accesscode = 123456;
	if (code == accesscode)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/// <summary>
/// returns the value of the property 'code'
/// </summary>
/// <returns></returns>
int Registration::getCode()
{
	return code;
}
