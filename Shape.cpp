//methods for shape class

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

Shape::Shape(string nameInput, string colourInput)
{
	const string AVAILABLE_NAMES[] = { "Circle", "Square","Unknown" };
	const int AVAILABLE_NAMES_LEN = sizeof(AVAILABLE_NAMES) / sizeof(string);
	const unsigned long MAX_NAME_LEN = 50; // max 50 characters allowed in name input

	if (nameInput.length() <= MAX_NAME_LEN)
	{
		for (int i = 0; i < AVAILABLE_NAMES_LEN; i++)
		{
			if (nameInput == AVAILABLE_NAMES[i])
			{
				name = nameInput;
			}
		}
	}
	else
	{
		name = "Unknown";
	}


	const string AVAILABLE_COLOURS[] = { "red", "green", "blue", "yellow", "purple", "pink", "orange", "undefined" };
	const int AVAILABLE_COLOURS_LEN = sizeof(AVAILABLE_COLOURS) / sizeof(string);
	const unsigned long MAX_COLOUR_LEN = 10; // max 10 characters allowed in colour input

	if (colourInput.length() <= MAX_COLOUR_LEN)
	{
		for (int i = 0; i < AVAILABLE_COLOURS_LEN; i++)
		{
			if (colourInput == AVAILABLE_COLOURS[i])
			{
				colour = colourInput;
			}
		}
	}
	else
	{
		colour = "undefined";
	}

}

Shape::Shape()
{
	name = "Unknown";
	colour = "undefined";
}

string Shape::GetName(void)
{
	string returnName;

	returnName.assign(name);

	return returnName;
}

string Shape::GetColour(void)
{
	string returnColour;

	returnColour.assign(colour);

	return returnColour;
}


int Shape::SetName(string nameInput)
{
	const string AVAILABLE_NAMES[] = { "Circle", "Square","Unknown" };
	const int AVAILABLE_NAMES_LEN = sizeof(AVAILABLE_NAMES) / sizeof(string);
	const unsigned long MAX_NAME_LEN = 50; // max 50 characters allowed in name input

	if (nameInput.length() <= MAX_NAME_LEN)
	{
		for (int i = 0; i < AVAILABLE_NAMES_LEN; i++)
		{
			if (nameInput == AVAILABLE_NAMES[i])
			{
				name = nameInput;
				return 0; //success
			}
		}
	}
	else
	{
		return -1; //invalid input, fail
	}
}

int Shape::SetColour(string colourInput)
{
	const string AVAILABLE_COLOURS[] = { "red", "green", "blue", "yellow", "purple", "pink", "orange", "undefined" };
	const int AVAILABLE_COLOURS_LEN = sizeof(AVAILABLE_COLOURS) / sizeof(string);
	const unsigned long MAX_COLOUR_LEN = 10; // max 10 characters allowed in colour input

	if (colourInput.length() <= MAX_COLOUR_LEN)
	{
		for (int i = 0; i < AVAILABLE_COLOURS_LEN; i++)
		{
			if (colourInput == AVAILABLE_COLOURS[i])
			{
				colour = colourInput;
				return 0; //success
			}
		}
	}
	else
	{
		return -1; //invalid input, fail
	}
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