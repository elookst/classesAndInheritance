//methods for circle class

#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"

#define PI 3.1415926

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
	float tempRadius = 0;

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


int Circle::Show(void)
{
	cout << "Shape Information:\n";
	cout << "Name             : " << Shape::GetName();
	cout << "Colour           : " << Shape::GetColour();
	cout << "Radius           : " << GetRadius() << " cm";
	cout << "Circumference    : " << Perimeter() << " cm";
	cout << "Area             : " << Area() << " cm";
}

float Circle::Perimeter(void)
{
	float perimeter = 2 * PI * radius;
	return perimeter;
}

float Circle::Area(void)
{
	float area = PI * radius * radius;
	return area;
}

float Circle::OverallDimension(void)
{
	return 2 * radius;
}

