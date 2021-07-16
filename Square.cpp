//methods for square class
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"


using namespace std;


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

//default constructor
Square::Square() : Shape("Square", "undefined")
{
	sideLength = 0.00;
}

Square::~Square()
{
	cout << "The square is squished ...\n";
}


float Square::GetSideLength(void)
{
	float tempLength = 0;
	tempLength = sideLength;
	return tempLength;
}

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
//set the attribute if valid only

void Square::Show(void)
{
	cout << "Shape Information:\n";
	cout << "Name             : " << Shape::GetName() << "\n";
	cout << "Colour           : " << Shape::GetColour() << "\n";
	cout << "Side-Length      : " << GetSideLength() << " cm" << "\n";
	cout << "Perimeter        : " << Perimeter() << " cm" << "\n";
	cout << "Area             : " << Area() << " cm^2" << "\n";

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

