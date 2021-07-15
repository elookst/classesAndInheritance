//methods for circle class

#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"

using namespace std;

Circle::Circle(string colourInput, float radiusInput) : Shape("Circle", colourInput)
{
	
	//check that this works for 0.001, 0.0001 but not 0.01 or 0.1
	double radiusDiff = radiusInput - 0.00;
	double tolerance = 0.0005;
	if (radiusDiff < tolerance && radiusInput >= 0.00)
	{
		radius = radiusInput;
	}
	else
	{
		radius = 0.00;
	}

}

Circle::Circle() : Shape("Circle", "undefined")
{
	radius = 0.00;
}


Circle::~Circle()
{
	cout << "The circle is broken ...";
}


float Circle::GetRadius(void)
{
	float tempRadius;

	tempRadius = radius;
	return tempRadius;
}

int Circle::SetRadius(float radiusInput)
{
	//check that this works for 0.001, 0.0001 but not 0.01 or 0.1
	double radiusDiff = radiusInput - 0.00;
	double tolerance = 0.0005;
	if (radiusDiff < tolerance && radiusInput >= 0.00)
	{
		radius = radiusInput;
		return 0; //success
	}
	else
	{
		return -1; //invalid input failed
	}
}


int Show(void);
//prints out info

//perimeter 2*pi*r
//area pi * r^2
//pi is 3.1415926

//overall dimension should return circle diameter (2r)
