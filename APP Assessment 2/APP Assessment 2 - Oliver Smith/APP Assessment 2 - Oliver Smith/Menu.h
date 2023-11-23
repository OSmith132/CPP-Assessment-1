#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "itemList.h"


class Menu : public ItemList {

public:
	Menu(std::string path) {

		std::ifstream stream(path);

		if (stream.fail()) {
			std::cerr << "Unable to open " << path << "\n";
			std::cerr << "ERROR: " << strerror(errno);
		}


	
		while (!stream.eof()) {

			std::string key;

			std::getline(stream, key, ',');
		}

	}

};