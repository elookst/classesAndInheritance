//test harness where main function will be

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
	Circle* userCircle;
	Square* userSquare;
	Shape* userUnknownShape;
	
	cout << "Enter name of shape you want to make: ";
	cin >> userShape;

	string userColour = "";
	cout << "Enter colour: ";
	cin >> userColour;


	cout << "Creating shape....";
	if (userShape == "Circle")
	{
		
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
		cout << "Shape Information";
		cout << "Name:       " << userUnknownShape->GetName();
		cout << "Colour:     " << userUnknownShape->GetColour();
		delete(userUnknownShape);
	}


	return 0;
}