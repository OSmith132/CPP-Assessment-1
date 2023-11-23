#pragma once
#include<string>
#include<vector>
#include "item.h"


class ItemList {

public:
	std::vector<Item*>  items;

	virtual std::string toString() = 0;


	~ItemList(){
		delete toString();
	}
};