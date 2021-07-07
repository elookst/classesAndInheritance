//methods for circle class

#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"

using namespace std;

Circle::Circle(string colourInput, float radiusInput)
{
	//colour = colourInput;
	radius = radiusInput;
}

Circle::Circle()
{
	radius = 0.0;
}

//default constructor
//sets radius to 0.0

Circle::~Circle()
{
	cout << "The circle is broken ...";
}

float GetRadius(void);
//getters for name and colour?
//validate input

int Show(void);
//prints out info

//perimeter 2*pi*r
//area pi * r^2
//pi is 3.1415926

//overall dimension should return circle diameter (2r)
