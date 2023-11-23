#include <iostream>
#include <string>
#include "Container.cpp"
#include "Animal.h"
#include "Sheep.h"
#include "Cow.h"
#include "Frisian.h"

int main()
{
    //instantiate a container class
    Container container;

    //user input and creation of instances
    std::string quitString;
    while (quitString != "no") {

        // get user input
        int number=0;
        while (std::cout << "\nSpecify animal type [1/2/3 = Sheep/Cow/Frisian]: " && !(std::cin >> number) || number < 1 || number > 3) {
            std::cin.clear(); //clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
            std::cout << "\nInvalid input. Please enter a valid integer\n";
        }

        // store chosen animal in container
        Animal* animalPointer{};
        switch (number)
        {
        case 1:
            animalPointer = new Sheep;
            break;
        case 2:
            animalPointer = new Cow;
            break;
        case 3:
            animalPointer = new Frisian;
            break;
        default:
            std::cout << "Enter a number from 1-3!";
        }

        
        container.add(animalPointer);
        // DON'T DELETE animalPointer as its reference is being stored in the container!!

        // query user if they want to continue
        std::cout << "\nDo you want to input another number? [yes/no]: ";
        std::cin >> quitString;

    }


    std::cout << "\n\n\n" << std::endl;
    for (int a = 0; a < container.size(); a++)
    {
        container[a]->speak();
    }

    return 0;
}