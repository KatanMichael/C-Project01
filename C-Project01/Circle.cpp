#include "stdafx.h"
#include "Circle.h"
#include <math.h>



Circle::Circle(int x, int y, int r, int color) : center(x,y)
{
	this->color = color;

	if (r < 0)
	{
		cout << "Radios cant be negativ Or zero" << endl;

		while (r <= 0)
		{
			cin >> r;
		}

	}

	this->radius = r;
}

int Circle::getColor() const
{
	return this->color;
}

void Circle::setColor(int color)
{
	this->color = color;
}

bool Circle::contains(const Point & p) const
{
	int x1, x2,x , y1, y2,y, d;

	x1 = p.getX();
	x2 = center.getX();

	y1 = p.getY();
	y2 = center.getY();

	x = x1 - x2;
	y = y1 - y2;

	x = pow((double)x, 2.0);
	y= pow((double)y, 2.0);

	d = sqrt(x + y);

	if (d > radius)
	{
		return false;
	}
	else
	{
		return true;
	}
	


}

void Circle::print() const
{
	cout << "Circle center=(" << center.getX() << "," << center.getY() << ") radius=" << this->radius
		<< "color=" << this->color << endl;
}
