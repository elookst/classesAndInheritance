//	FILE			:	Circle.cpp
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the definition for the methods and functions of the Circle class.

#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"



using namespace std;

/// \brief To instantiate a new Circle object - given a set of attribute values
/// \details <b>Details</b>
/// 
/// \param colourInput - <b>string</b> - name of the colour (instantiated through Shape class)
/// \param radiusInput - <b>float</b> - length of radius of the Circle in centimetres
/// \return NONE (constructs the Circle object)
Circle::Circle(string colourInput, float radiusInput) : Shape("Circle", colourInput)
{

	double tolerance = 0.000001; // ensure the value is larger than 0.00, 0.001 should be allowed but 0.01 should not
	if (radiusInput > tolerance && radiusInput >= 0.00)
	{
		radius = radiusInput;
	}
	else
	{
		radius = 0.00;
	}


}

/// \brief To instantiate a new Circle object with no attributes given (set's default values)
/// \details <b>Details</b>
/// 
/// \param  NONE
/// \return NONE (constructs the Circle object, initializes other data members through Shape class)
Circle::Circle() : Shape("Circle", "undefined")
{
	radius = 0.00;
}

/// \brief Destroys a Circle object
/// \details <b>Details</b>
/// 
/// \param  NONE
/// \return NONE - outputs a message indicating that the object was destroyed
/// \see Circle()
Circle::~Circle()
{
	cout << "The circle is broken ...\n";
}

/// \brief Called to display the radius of the Circle
/// \details <b>Details</b>
///
/// \param - NONE
/// 
/// \return float - returns the radius of the Circle in centimetres
float Circle::GetRadius(void)
{
	float tempRadius = 0;

	tempRadius = radius;
	return tempRadius;
}


/// \brief Called to modify the radius of the Circle after it has been constructed
/// \details <b>Details</b>
///
/// \param radiusInput - <b>float</b> - new radius of the Circle
/// 
/// \return Returns int - <b>0</b> if successful or <b>-1</b> if invalid
int Circle::SetRadius(float radiusInput)
{
	double tolerance = 0.000001;
	if ((radiusInput > tolerance) && (radiusInput >= 0.00))
	{
		radius = radiusInput;
		return 0; //success
	}
	else
	{
		return -1; //invalid input failed
	}
}

/// \brief Called to display the information of the Circle
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return NONE - outputs name, colour, radius, circumference, and area
void Circle::Show(void)
{
	cout << "Shape Information:\n";
	cout << "Name             : " << Shape::GetName() << "\n";
	cout << "Colour           : " << Shape::GetColour() << "\n";
	cout << "Radius           : " << GetRadius() << " cm" << "\n";
	cout << "Circumference    : " << Perimeter() << " cm" << "\n";
	cout << "Area             : " << Area() << " cm^2" << "\n";
}

/// \brief Called to calculate the circumference of the Circle
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return float - the circumference of the Circle (2*pi*r) in centimetres
float Circle::Perimeter(void)
{
	float perimeter = 2 * (float)PI * radius;
	return perimeter;
}

/// \brief Called to calculate the area of the Circle
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return float - the area of the Circle (pi*r^2) in square centimetres
float Circle::Area(void)
{
	float area = (float)PI * radius * radius;
	return area;
}

/// \brief Called to display diameter of the Circle
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return float - the diameter (2*r) of the Circle in centimetres
float Circle::OverallDimension(void)
{
	return 2 * radius;
}

