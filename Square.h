#pragma once
//	FILE			:	Square.h
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the class definition for the Square class.

#include <iostream>
#include <string>
#include "Shape.h"

/// 
/// \class Square
///
/// \brief The purpose of this class is to model characteristics of a square.
/// The class publicly inherits methods and functions from the Shape class.
/// This class includes a data member to model the dimension of the square in centimetres,
/// and overrides virtual functions for perimeter, area, and overall dimension calculations.
class Square : public Shape
{
private:
	float sideLength; ///< length of the side of the square, which must be greater than 0.00

public:
	Square(std::string colourInput, float sideLengthInput);

	Square();

	virtual ~Square();

	float GetSideLength(void);

	int SetSideLength(float sideLengthInput);

	void Show(void);

	virtual float Perimeter(void);

	virtual float Area(void);

	virtual float OverallDimension(void);


};