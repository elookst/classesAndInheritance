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
	double tolerance = 0.001;
	if (radiusDiff > tolerance && radiusInput >= 0.00)
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
	cout << "The circle is broken ...\n";
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
	double tolerance = 0.001;
	if ((radiusDiff > tolerance) && radiusInput >= 0.00)
	{
		radius = radiusInput;
		return 0; //success
	}
	else
	{
		return -1; //invalid input failed
	}
}


void Circle::Show(void)
{
	cout << "Shape Information:\n";
	cout << "Name             : " << Shape::GetName() << "\n";
	cout << "Colour           : " << Shape::GetColour() << "\n";
	cout << "Radius           : " << GetRadius() << " cm" << "\n";
	cout << "Circumference    : " << Perimeter() << " cm" << "\n";
	cout << "Area             : " << Area() << " cm^2" << "\n";
}

float Circle::Perimeter(void)
{
	float perimeter = 2 * (float)PI * radius;
	return perimeter;
}

float Circle::Area(void)
{
	float area = (float)PI * radius * radius;
	return area;
}

float Circle::OverallDimension(void)
{
	return 2 * radius;
}

