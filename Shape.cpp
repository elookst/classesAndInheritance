//methods for shape class

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

Shape::Shape(string nameInput, string colourInput)
{
	name = nameInput;
	colour = colourInput;
}

Shape::Shape()
{
	name = "Unknown";
	colour = "undefined";
	//default constructor - confirm this
}

string Shape::GetName(void)
{
	return name;
}

string Shape::GetColour(void)
{
	return colour;
}
//watch return data type? don't want to change data member's value

//also need to validate the input - if invalid leave data as it was
void Shape::SetName(string nameInput)
{
	name = nameInput;
}

void Shape::SetColour(string colourInput)
{
	colour = colourInput;
}

//3 pure virtual functions
double Shape::Perimeter(void)
{
	return 6.0;
}

double Shape::Area(void)
{
	return 6.0;
}

double Shape::OverallDimension(void)
{
	return 6.0;
}