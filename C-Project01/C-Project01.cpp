/*
Yossi Sydnon - 311303333
Michael Katan - 304964273

*/

#include "Collection.h"

#include <iostream>
using namespace std;



void main()
{
	int in;
	Collection g(4, 3, 2, 0);
	cout << "-- before setColor(2) --" << endl;
	g.print();
	Point p(5, 1);
	g.getCircleAt(p).setColor(2);
	cout << "-- after setColor(2) --" << endl;
	g.print();

	cin >> in;

}

