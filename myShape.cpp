//test harness where main function will be

#include <iostream>
#include <string>
#include <new.h>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

#define quitKey "q"

using namespace std;

#pragma warning (disable:4996)

int main(void)
{

	string userShape = "";
	
	cout << "Enter name of shape you want to make: ";
	cin >> userShape;

	string userColour = "";
	cout << "Enter colour: ";
	cin >> userColour;


	cout << "Creating shape....";
	if (userShape == "Circle")
	{
		Circle* userCircle;

		float userRadius = 0;
		cout << "Enter radius of circle: ";
		cin >> userRadius;
		try
		{
			userCircle = new Circle(userColour, userRadius);
		}
		catch (bad_alloc& userCircle)
		{
			cout << "Out of memory!";
		}
		

	}
	else if (userShape == "Square")
	{
		Square* userSquare;

		float userSideLength = 0;
		cout << "Enter side length of square: ";
		cin >> userSideLength;
		try
		{
			userSquare = new Square(userColour, userSideLength);
		}
		catch (bad_alloc& userSquare)
		{
			cout << "Out of memory!";
		}
	}
	else
	{
		Shape* userUnknownShape;
		try
		{
			userUnknownShape = new Shape(userShape, userColour);
		}
		catch(bad_alloc& userUnknownShape)
		{
			cout << "Out of memory!";
		}

	}

	cout << "Now displaying information... ";




	


	return 0;
}