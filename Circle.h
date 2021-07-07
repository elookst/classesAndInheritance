#pragma once
//definition for Circle

#include <iostream>
#include <string>
#include "Shape.h"

class Circle : public Shape
{
private:

	float radius;
	//allowed values are => 0.0

public:

	Circle(std::string colourInput, float radiusInput);

	//default constructor
	//sets radius to 0.0

	~Circle();

	float GetRadius(void);
	//getters for name and colour?
	//validate input

	int Show(void);
	//prints out info

	//perimeter 2*pi*r
	//area pi * r^2
	//pi is 3.1415926

	//overall dimension should return circle diameter (2r)

	


};