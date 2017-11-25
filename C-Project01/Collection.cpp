#include "stdafx.h"
#include "Collection.h"
#include <cassert>


//constructor
Collection::Collection(int radius, int width, int height, int color)
{
	this->count = 0;

	if (radius <= 0)
	{
		radius = 1;
	}

	if (width <= 0)
	{
		width = 1;
	}

	if (height <= 0)
	{
		height = 1;
	}

	circles = new Circle*[width*height];

	if (circles == NULL)
	{
		cout << "Coudlnt locate enough memory for circles array" << endl;
		exit(1);
	}


	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			circles[count] = new Circle(radius * 2 * j, radius * 2 * i, radius, color);
			
			if (circles[count] == NULL)
			{
				cout << "Coudlnt locate enough memory for circle" << endl;
				exit(1);
			}

			count++;
		}
		
	}

		
}

//Destractor
Collection::~Collection()
{
	for (int i = 0; i<count; i++)
	{
		delete circles[i];
	}
	delete circles;
}

//Return the circle contain a curtian point
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

//Print allt he circles in the array
void Collection::print() const
{
	int i = 0;

	for (; i < count ; i++)
	{
		circles[i]->print();
	}
}
