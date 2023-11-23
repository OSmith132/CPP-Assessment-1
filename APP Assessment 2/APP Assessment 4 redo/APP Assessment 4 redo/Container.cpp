#include "Animal.h"
#include <vector>

class Container {
public:

	/// <summary>
	/// returns a reference of the animal at the given index
	/// </summary>
	/// <param name="index"></param>
	/// <returns></returns>
	Animal* operator[](int index)
	{

		return data[index];
	}

	/// <summary>
	/// Adds an animal to the container
	/// </summary>
	/// <param name="animal"></param>
	void add(Animal *animal) {
		//Animal* storedPointer = animal;
		data.push_back(animal);
	}

	/// <summary>
	/// returns the size of the container
	/// </summary>
	int size() {
		return data.size();
	}


	/// <summary>
	/// class deconstructor
	/// </summary>
	~Container()
	{
		data.clear();
	}


private:
	std::vector<Animal*> data;
};