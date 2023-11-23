#include "Appetiser.h"
#include <iostream>
#include <string>

/// <summary>
/// Returns a string containing the information about the item
/// </summary>
/// <returns></returns>
std::string Appetiser::toString() {

	std::string returnString;
	if (shareable) { returnString.append(" (shareable)"); }
	if (shareable) { returnString.append(" (2-4-1)"); }


	
	return name + ": £" + std::to_string(price).insert(std::to_string(price).size() - 2, ".") + ", " + std::to_string(calories) + " cal " + returnString;
}


Appetiser::Appetiser(int c, int p, std::string n, bool s, bool t) : shareable(s), twoForOne(t) {
	calories = c;
	price = p;
	name = n;
}