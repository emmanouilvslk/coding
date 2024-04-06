#include <iostream>
#include "cylinder.h"




int main(){

	Cylinder myCylinder;
	Cylinder cylinder1(10,4);

	myCylinder.set_base_radius(20.0);

	std::cout << myCylinder.get_base_radius() << std::endl;

	return 0;
}