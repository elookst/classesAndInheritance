//	FILE			:	Shape.cpp
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the definition for the methods and functions of the SHAPES class.

#include <iostream>
#include <string>
#include "Shape.h"

using namespace std;

/// \brief To instantiate a new SHAPE object - given a set of attribute values
/// \details <b>Details</b>
/// 
/// \param nameInput - <b>string</b> - name of the shape to create (CIRCLE, SQUARE, UNKNOWN)
/// \param colourInput - <b>string</b> - colour of the shape (see constant <i>AVAILABLE_COLOURS</i> for list)
/// \return NONE (constructs the SHAPE object)

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

/// \brief To instantiate a new SHAPE object with no attributes given (set's default values)
/// \details <b>Details</b>
/// 
/// \param  NONE
/// \return NONE (constructs the SHAPE object)
Shape::Shape()
{
	name = "Unknown";
	colour = "undefined";
}


/// \brief Called to display the name of the Shape
/// \details <b>Details</b>
///
/// \param - NONE
/// 
/// \return Returns the name of the Shape as a string
string Shape::GetName(void)
{
	string returnName;

	returnName.assign(name);

	return returnName;
}

/// \brief Called to display the colour of the Shape
/// \details <b>Details</b>
///
/// \param - NONE
/// 
/// \return Returns the colour of the Shape as a string
string Shape::GetColour(void)
{
	string returnColour;

	returnColour.assign(colour);

	return returnColour;
}

/// \brief Called to modify the name of the shape after it has been constructed
/// \details <b>Details</b>
///
/// \param nameInput - <b>string</b> - new name of the shape
/// 
/// \return Returns int - <b>0</b> if successful, <b>-1</b> if acceptable input but no name found
/// <b>-2</b> invalid input (name too long) or <b>-3</b> no name given as input
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

/// \brief Called to modify the colour of the shape after it has been constructed
/// \details <b>Details</b>
///
/// \param colourInput - <b>string</b> - new colour of the shape
/// 
/// \return Returns int - <b>0</b> if successful, <b>-1</b> if acceptable input but no colour found
/// <b>-2</b> invalid input (name too long) or <b>-3</b> no name given as input
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

/// \brief Called to calculate perimeter of the shape
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return Returns float - for Shape class, it returns 0.00 and the virtual function
/// is used elsewhere by the other child classes.
float Shape::Perimeter(void)
{
	return 0.00;
}

/// \brief Called to calculate area of the shape
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return Returns float - for Shape class, it returns 0.00 and the virtual function
/// is used elsewhere by the other child classes.
float Shape::Area(void)
{
	return 0.00;
}

/// \brief Called to display the dimension of the shape (side length etc.)
/// \details <b>Details</b>
///
/// \param NONE
/// 
/// \return Returns float - for Shape class, it returns 0.00 and the virtual function
/// is used elsewhere by the other child classes.
float Shape::OverallDimension(void)
{
	return 0.00;
}