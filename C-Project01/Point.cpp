
#include "Point.h"


//constructor
Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}


//Setteers And Getters
int Point::getX() const
{
	return this->x;
}

int Point::getY() const
{
	return this->y;
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

//Print point
void Point::print() const
{
	cout << "X: " << x << " Y: " << y << endl;
}
