#include "stdafx.h"
#include "Collection.h"

Collection::Collection(int radius, int width, int height, int color)
{
	int x = width * height;
	int c = 0;
	int i = 0, j = 0;

	circles = new Circle*[width*height];
	for (; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			
		}
	}
		
}

Collection::~Collection()
{

}

Circle & Collection::getCircleAt(const Point & p)
{
	// TODO: insert return statement here
	return *circles[0];
}

void Collection::print() const
{
	//TODO Print Method
}
