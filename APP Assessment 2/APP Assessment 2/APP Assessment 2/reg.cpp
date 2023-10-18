#include "reg.h"

void Registration::output()
{
	cout << "attend = " << attend << endl;
}

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

void Registration::setRecord(bool index)
{
	if (index)
		attend = 1;
	else
		attend = 0;
}

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

int Registration::getCode()
{
	return code;
}