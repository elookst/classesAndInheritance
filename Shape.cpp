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
		int i = 0;
		for (i = 0; i < AVAILABLE_NAMES_LEN; i++)
		{
			if (nameInput == AVAILABLE_NAMES[i])
			{
				name = nameInput;
				break;
			}
		}
		if (i == AVAILABLE_NAMES_LEN)
		{
			name = "Unknown";
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
		int j = 0;
		for (j = 0; j < AVAILABLE_COLOURS_LEN; j++)
		{
			if (colourInput == AVAILABLE_COLOURS[j])
			{
				colour = colourInput;
				break;
			}
		}
		if (j == AVAILABLE_COLOURS_LEN)
		{
			colour = "undefined";
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
		int i = 0;
		for (i = 0; i < AVAILABLE_NAMES_LEN; i++)
		{
			if (nameInput == AVAILABLE_NAMES[i])
			{
				name = nameInput;
				return 0; //success
			}
		}
		if (i == AVAILABLE_NAMES_LEN)
		{
			return -1; //no available name
		}

	}
	else
	{
		return -2; // name too long
	}

	return -3;  //error
}

int Shape::SetColour(string colourInput)
{
	const string AVAILABLE_COLOURS[] = { "red", "green", "blue", "yellow", "purple", "pink", "orange", "undefined" };
	const int AVAILABLE_COLOURS_LEN = sizeof(AVAILABLE_COLOURS) / sizeof(string);
	const unsigned long MAX_COLOUR_LEN = 10; // max 10 characters allowed in colour input

	if (colourInput.length() <= MAX_COLOUR_LEN)
	{
		int i = 0;
		for (i = 0; i < AVAILABLE_COLOURS_LEN; i++)
		{
			if (colourInput == AVAILABLE_COLOURS[i])
			{
				colour = colourInput;
				return 0; //success
			}
		}
		if (i == AVAILABLE_COLOURS_LEN)
		{
			return -1; //invalid input, no colour in list
		}
	}
	else
	{
		return -2; //invalid input, fail
	}

	return -3;  //error
}

//3 pure virtual functions
float Shape::Perimeter(void)
{
	return 0.00;
}

float Shape::Area(void)
{
	return 0.00;
}

float Shape::OverallDimension(void)
{
	return 0.00;
}