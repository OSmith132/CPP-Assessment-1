#include "Beverage.h"
#include <iostream>
#include <string>

/// <summary>
/// Returns a string containing the information about the item
/// </summary>
/// <returns></returns>
std::string Beverage::toString() {

	std::string returnString;
	
	if (isAlcoholic()) { returnString.append(", " + std::to_string(abv) + "% abv"); }

	return name + ": £" + std::to_string(price).insert(std::to_string(price).size() - 2, ".") + ", " + std::to_string(calories) + " cal (" + std::to_string(volume) + "ml" + returnString + ")";
}


/// <summary>
/// Returns true if abv > 0
/// </summary>
/// <returns></returns>
bool Beverage::isAlcoholic() {

	if (abv > 0) {
		return true;
	}
	return false;
}


/// <summary>
/// Class constructor
/// </summary>
/// <param name="c"></param>
/// <param name="p"></param>
/// <param name="n"></param>
/// <param name="v"></param>
/// <param name="a"></param>
Beverage::Beverage(int c, int p, std::string n, int v, float a) : volume(v), abv(a) {
		calories = c;
		price = p;
		name = n;
}



