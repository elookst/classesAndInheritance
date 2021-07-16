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
	Circle* userCircle = NULL;
	Square* userSquare = NULL;
	Shape* userUnknownShape = NULL;
	
	cout << "Enter name of shape you want to make: ";
	cin >> userShape;

	string userColour = "";
	cout << "Enter colour: ";
	cin >> userColour;


	cout << "Creating shape....\n";
	if (userShape == "Circle")
	{
		
		float userRadius = 0;
		cout << "Enter radius of circle: ";
		cin >> userRadius;
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

	cout << "Now displaying information...\n ";
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