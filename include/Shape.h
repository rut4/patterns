#ifndef DRAWING_SHAPE_CLASS
#define DRAWING_SHAPE_CLASS

// Abstraction
class Shape {
public:
	virtual Shape* draw() = 0;
	virtual Shape* resize(float scale) = 0;
};

#endif