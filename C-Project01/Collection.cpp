#include "stdafx.h"
#include "Collection.h"

Collection::Collection(int radius, int width, int height, int color)
{
	this->count = 0;
	int x = width * height;
	int c = 0;
	int i = 0, j = 0;

	circles = new Circle*[width*height];
	for (; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			circles[count] = new Circle(radius * 2 * j, radius * 2 * i, radius, color);
			count++;
		}
		
	}

		
}

Collection::~Collection()
{

}

Circle & Collection::getCircleAt(const Point & p)
{
	int i = 0;
	for (; i < count - 1; i++)
	{
		if ((circles[i]->contains(p)) == true)
		{
			return *circles[i];
		}
	}

}

void Collection::print() const
{
	int i = 0;

	for (; i < count ; i++)
	{
		circles[i]->print();
	}
}
