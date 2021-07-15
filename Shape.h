//class definition for shape

#include <iostream>
#include <string>



class Shape
{
private:
	std::string name; 
	//max 50 characters
	//can be Circle Square, or unknown

	std::string colour;
	//max 10 characters
	//allowed colours include red, green, blue, yellow, purple, pink, orange and undefined
	
public:

	Shape(std::string nameInput, std::string colourInput);

	Shape(); //default constructor - confirm this

	std::string GetName(void);

	std::string GetColour(void);
	//watch return data type? don't want to change data member's value

	//also need to validate the input - if invalid leave data as it was
	int SetName(std::string nameInput);

	int SetColour(std::string colourInput);

	//3 pure virtual functions
	virtual double Perimeter(void);

	virtual double Area(void);

	virtual double OverallDimension(void);
	
	//no destructor needed

};
