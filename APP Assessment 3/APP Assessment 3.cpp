
#include<iostream>
#include "A.h"




int main() {
	A* a1 = new A("a");
	a1->setName("IamA");
	A a2 = *a1;
	delete a1;
	a2.printName();
}



