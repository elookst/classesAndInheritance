#pragma once
//	FILE			:	Circle.h
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the class definition for the Circle class.

#include <iostream>
#include <string>
#include "Shape.h"

#define PI 3.1415926 ///< constant for the value of PI to calculate area & circumference of Circle

/// 
/// \class Circle
///
/// \brief The purpose of this class is to model characteristics of a circle.
/// The class publicly inherits methods and functions from the Shape class.
/// This class includes a data member to model the radius of the circle in centimetres,
/// and overrides virtual functions for perimeter, area, and overall dimension calculations.
class Circle : public Shape
{
private:

	float radius; ///< radius of the circle in centimetres, must be greater than or equal to 0.00
	

public:

	Circle(std::string colourInput, float radiusInput);

	Circle();

	virtual ~Circle();

	float GetRadius(void);

	int SetRadius(float);

	void Show(void);

	virtual float Perimeter(void);

	virtual float Area(void);

	virtual float OverallDimension(void);


};