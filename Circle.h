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

	Circle();

	virtual ~Circle();

	float GetRadius(void);

	int SetRadius(float);
	//getters for name and colour?
	//validate input

	int Show(void);

	virtual double Perimeter(void);

	virtual double Area(void);

	virtual double OverallDimension(void);
	//prints out info

	//perimeter 2*pi*r
	//area pi * r^2
	//pi is 3.1415926

	//overall dimension should return circle diameter (2r)

	


};