#pragma once
#include "Item.h"


class Beverage : public Item {
public:
	int volume;
	float abv;

	Beverage(int c, int p, std::string n, int v, float a);

	std::string toString();

	bool isAlcoholic();

};