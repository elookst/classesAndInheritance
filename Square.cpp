//	FILE			:	Square.cpp
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the definition for the methods and functions of the Square class.
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"


using namespace std;

/// \brief To instantiate a new Square object - given a set of attribute values
/// \details <b>Details</b>
/// 
/// \param colourInput - <b>string</b> - name of the colour (instantiated through Shape class)
/// \param sideLengthInput - <b>float</b> - length of one side of the Square in centimetres
/// \return NONE (constructs the Square object)
Square::Square(string colourInput, float sideLengthInput) : Shape("Square", colourInput)
{
	double tolerance = 0.000001;
	if (sideLengthInput > tolerance && sideLengthInput >= 0.00)
	{
		sideLength = sideLengthInput;
	}
	else
	{
		sideLength = 0.00;
	}
}

/// \brief To instantiate a new Square object with no attributes given (set's default values)
/// \details <b>Details</b>
/// 
/// \param  NONE
/// \return NONE (constructs the Square object, initializes other data members through Shape class)
Square::Square() : Shape("Square", "undefined")
{
	sideLength = 0.00;
}
/// \brief Destroys a Square object
/// \details <b>Details</b>
/// 
/// \param  NONE
/// \return NONE - outputs a message indicating that the object was destroyed
/// \see Square()
Square::~Square()
{
	cout << "The square is squished ...\n";
}

/// \brief Called to display the side length of the Square
/// \details <b>Details</b>
///
/// \param - NONE
/// 
/// \return float - returns the length of the Square
float Square::GetSideLength(void)
{
	float tempLength = 0;
	tempLength = sideLength;
	return tempLength;
}

/// \brief Called to modify the side length of the Square after it has been constructed
/// \details <b>Details</b>
///
/// \param sideLengthInput - <b>float</b> - new side length of the Square
/// 
/// \return Returns int - <b>0</b> if successful or <b>-1</b> if invalid
int Square::SetSideLength(float sideLengthInput)
{
	double tolerance = 0.000001;
	if (sideLengthInput > tolerance && sideLengthInput >= 0.00)
	{
		sideLength = sideLengthInput;
		return 0; // success
	}
	else
	{
		return -1; // invalid input
	}

}

/// \brief Called to display the information of the Square
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return NONE - outputs name, colour, sideLength, Perimeter, and Area
void Square::Show(void)
{
	cout << "Shape Information:\n";
	cout << "Name             : " << Shape::GetName() << "\n";
	cout << "Colour           : " << Shape::GetColour() << "\n";
	cout << "Side-Length      : " << GetSideLength() << " cm" << "\n";
	cout << "Perimeter        : " << Perimeter() << " cm" << "\n";
	cout << "Area             : " << Area() << " cm^2" << "\n";

}

/// \brief Called to calculate the perimeter of the Square
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return float - the perimeter of the Square (4s) in centimetres
float Square::Perimeter(void)
{
	float perimeter = 4 * sideLength;
	return perimeter;
}

/// \brief Called to calculate the area of the Square
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return float - the area of the Square (s^2) in square centimetres
float Square::Area(void)
{
	float area = sideLength * sideLength;
	return area;
}

/// \brief Called to display overall dimension of the Square
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return float - the side length of the Square in centimetres
float Square::OverallDimension(void)
{
	return Square::GetSideLength();
}

