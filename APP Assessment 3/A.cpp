#include "A.h"
#include <iostream>


/// <summary>
/// Constructor For A class
/// </summary>
/// <param name="newName"></param>
A::A(std::string newName) {
	name = newName;
}

/// <summary>
/// Copy constructor for A class
/// </summary>
/// <param name="old_obj"></param>
A::A(const A& old_obj) {
	name = old_obj.name;
}


/// <summary>
/// Sets the private variable A.name to the provided argument
/// </summary>
/// <param name="newName"></param>
void A::setName(std::string newName) {
	name = newName;
}


/// <summary>
/// Outputs the value of the private variable A.name 
/// </summary>
void A::printName() {
	std::cout << name << std::endl;
}