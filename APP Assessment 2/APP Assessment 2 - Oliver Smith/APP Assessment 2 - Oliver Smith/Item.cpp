#include "item.h"
#include<iostream>
#include<string>

/// <summary>
/// Returns a string containing the information about the item
/// </summary>
/// <returns></returns>
std::string Item::toString() {
	return name + ": £" + std::to_string(price).insert(std::to_string(price).size() - 2, ".") + ", " + std::to_string(calories) + " cal ";
}





