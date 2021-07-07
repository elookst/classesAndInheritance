//methods for square class
#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"


using namespace std;


Square::Square(string colour, float sideLengthInput)
{

}

//default constructor
Square::Square()
{

}

Square::~Square()
{
	cout << "The square is squished ...";
}


float Square::GetSideLength(void)
{
	return sideLength;
}

void Square::SetSideLength(float sideLengthInput)
{
	sideLength = sideLengthInput;
}
//set the attribute if valid only

int Show(void)
{
	return 1;
}
//display properties (inherit maybe?)

//p = 4s
// a = s^2

//Overall Dimension should return side length of square (s)