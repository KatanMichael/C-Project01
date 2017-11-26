
#include "Circle.h"  //in this #include "Point" #include <iostream>,using namespace std;




//constructor
Circle::Circle(int x, int y, int r, int color) : center(x, y)
{
	this->color = color;

	if (r < 0)
	{
		cout << "Radios cant be negativ Or zero, insert another number" << endl;

		while (r <= 0)
		{
			cin >> r;
		}

	}

	this->radius = r;
}

//Getter And Setter
int Circle::getColor() const
{
	return this->color;
}

void Circle::setColor(int color)
{
	this->color = color;
}

//Chack if a curtian point is in the circle
bool Circle::contains(const Point & p) const
{
	int a, b, R;

	a = p.getX() - this->center.getX();
	a = a*a;                                  //(x1-x2)^2
	b = p.getY() - this->center.getY();
	b = b*b;                                  //(y1-y2)^2
	R = this->radius*this->radius;           // rudius^2

	if (R<(a + b))                            //if( (radius^2 )  <  (  (x1-x2)^2+(y1-y2)^2  ) ~- if( radiud^2 < d^2 )
		return false;
	else
		return true;
}

void Circle::print() const
{
	cout << "Circle center=(" << center.getX() << "," << center.getY() << ") radius=" << this->radius
		<< " color=" << this->color << endl; //Print using the example Templet
}
