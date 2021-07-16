//	FILE			:	myShape.cpp
//	PROJECT			:	OOP Assignment #4
//	PROGRAMMER		:	Erica Luksts
//	FIRST-VERSION	:	July 14, 2021
//	DESCRIPTION		:	This file contains the test harness for the Circle, Square, and Shape classes.
//	The program asks the user to input the name of the shape, the colour of the shape, and then the program will
//	ask the user to enter a dimension. Then the program will display all of the information of the shape and delete any
//	memory allocated.

#include <iostream>
#include <string>
#include <new.h>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"


using namespace std;

#pragma warning (disable:4996)

int main(void)
{

	string userShape = "";
	Circle* userCircle = NULL;
	Square* userSquare = NULL;
	Shape* userUnknownShape = NULL;
	
	// prompt user for name of shape and store it in variable
	cout << "Enter name of shape you want to make: ";
	cin >> userShape;

	//prompt user for colour of shape and store it in variable
	string userColour = "";
	cout << "Enter colour: ";
	cin >> userColour;

	//prompt user for dimension input based on shape information they've given
	if (userShape == "Circle")
	{
		
		float userRadius = 0;
		cout << "Enter radius of circle: ";
		cin >> userRadius;

		//check memory allocated correctly
		if ((userCircle = new Circle(userColour, userRadius)) == NULL)
		{
			cout << "Out of memory!\n";
			return -1; 
		}


	}
	else if (userShape == "Square")
	{

		float userSideLength = 0;
		cout << "Enter side length of square: ";
		cin >> userSideLength;
		if ((userSquare = new Square(userColour, userSideLength)) == NULL)
		{
			cout << "Out of memory!\n";
			return -1;
		}

	}
	else
	{
		
		if ((userUnknownShape = new Shape(userShape, userColour)) == NULL)
		{
			cout << "Out of memory!\n";
			return -1;;
		}


	}

	//display information of the shape depending on the shape information given
	if (userCircle != NULL)
	{
		userCircle->Show();
		delete(userCircle);

	}
	else if (userSquare != NULL)
	{
		userSquare->Show();
		delete(userSquare);
	}
	else
	{
		cout << "Shape Information\n";
		cout << "Name:       " << userUnknownShape->GetName() << "\n";
		cout << "Colour:     " << userUnknownShape->GetColour() << "\n";
		delete(userUnknownShape);
	}


	return 0;
}