#include "stdafx.h"
#include "Collection.h"

Collection::Collection(int radius, int width, int height, int color)
{
	this->count = 0;
	int x = width * height;
	int c = 0;
	int i = 0, j = 0;

	circles = new Circle*[width*height];
	for (; c < width*height; c++)
	{
		circles[c] = new Circle(radius * 2 * i, radius * 2 * j, radius, color);
	//	cout << "I: " << i << " J: " << j << " I+J: " << i + j << endl;
		count++;
	}

//	cout << "There Are " << count << " Circles in the collaction." << endl;
		
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
	int i = 0;

	for (; i < count ; i++)
	{
		circles[i]->print();
	}
}
