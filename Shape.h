#pragma once
//	FILE			:	Shape.h
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the class definition for the shapes class.

#include <iostream>
#include <string>

/// 
/// \class Shape
///
/// \brief The purpose of this class is to model characteristics of a shape.
/// The class includes attributes to represent the name of the shape and
/// the colour of the shape. Methods that are included allow
/// for the name or colour to be displayed or modified. The functions that are included
/// allow for perimeter, area, or dimensions to be calculated. The <i>Circle</i> and 
/// <i>Square</i> classes depend on the <i>Shape</i> class to perform necessary functions.

class Shape
{
private:
	std::string name; ///< name of the shape with maximum 50 characters accepted

	std::string colour; ///< colour of the shape with maximum 10 characters accepted

	
public:

	Shape(std::string nameInput, std::string colourInput); // Constructor

	Shape(); // Default Constructor

	std::string GetName(void); // getter for name

	std::string GetColour(void); // getter for colour

	int SetName(std::string nameInput);

	int SetColour(std::string colourInput);

	virtual float Perimeter(void);

	virtual float Area(void);

	virtual float OverallDimension(void);
	

};
