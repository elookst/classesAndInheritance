#pragma once
//definition for square

#include <iostream>
#include <string>
#include "Shape.h"

class Square : public Shape
{
private:
	float sideLength;
	//val must be greater than or equal to 0

public:
	Square(std::string colour, float sideLengthInput);

	//default constructor
	Square();

	~Square();

	float GetSideLength(void);

	void SetSideLength(float sideLengthInput);
	//set the attribute if valid only

	int Show(void);
	//display properties (inherit maybe?)

	//p = 4s
	// a = s^2
	
	//Overall Dimension should return side length of square (s)


};