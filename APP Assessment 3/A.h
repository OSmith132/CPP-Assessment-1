#pragma once
#include <string>

class A {

public:
	A(std::string newName);
	A(const A& old_obj);
	void setName(std::string newName);
	void printName();

private:
	std::string name;

};