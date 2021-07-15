//methods for square class
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"


using namespace std;


Square::Square(string colourInput, float sideLengthInput) : Shape("Square", colourInput)
{
	//check that this works for 0.001, 0.0001 but not 0.01 or 0.1
	double sideDiff = sideLengthInput - 0.00;
	double tolerance = 0.0005;
	if (sideDiff < tolerance && sideLengthInput >= 0.00)
	{
		sideLength = sideLengthInput;
	}
	else
	{
		sideLength = 0.00;
	}
}

//default constructor
Square::Square() : Shape("Square", "undefined")
{
	sideLength = 0.00;
}

Square::~Square()
{
	cout << "The square is squished ...";
}


float Square::GetSideLength(void)
{
	float tempLength = 0;
	tempLength = sideLength;
	return tempLength;
}

void Square::SetSideLength(float sideLengthInput)
{
	//check that this works for 0.001, 0.0001 but not 0.01 or 0.1
	double sideDiff = sideLengthInput - 0.00;
	double tolerance = 0.0005;
	if (sideDiff < tolerance && sideLengthInput >= 0.00)
	{
		sideLength = sideLengthInput;
	}
	else
	{
		sideLength = 0.00;
	}
}
//set the attribute if valid only

void Square::Show(void)
{
	cout << "Shape Information:\n";
	cout << "Name             : " << Shape::GetName();
	cout << "Colour           : " << Shape::GetColour();
	cout << "Side-Length      : " << GetSideLength() << " cm";
	cout << "Perimeter        : " << Perimeter() << " cm";
	cout << "Area             : " << Area() << " cm";

}

float Square::Perimeter(void)
{
	float perimeter = 4 * sideLength;
	return perimeter;
}

float Square::Area(void)
{
	float area = sideLength * sideLength;
	return area;
}

float Square::OverallDimension(void)
{
	return Square::GetSideLength();
}
//display properties (inherit maybe?)

//p = 4s
// a = s^2

//Overall Dimension should return side length of square (s)