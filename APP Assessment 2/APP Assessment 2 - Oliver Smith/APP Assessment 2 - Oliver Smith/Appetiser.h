#pragma once
#include "Item.h"


class Appetiser : public Item {
public:
	bool shareable;
	bool twoForOne;

	Appetiser(int c, int p, std::string n, bool s, bool t);

	std::string toString();

};
