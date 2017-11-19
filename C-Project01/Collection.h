
#include "Circle.h"
#include "Point.h"

class Collection
{
public:
	
	Collection(int radius, int width, int height, int color);
	~Collection();
	Circle& getCircleAt(const Point &p);
	void print() const;
private:
	int count;
	Circle **circles;
};

