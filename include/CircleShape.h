#ifndef DRAWING_CIRCLE_SHAPE_CLASS
#define DRAWING_CIRCLE_SHAPE_CLASS

#include "Shape.h"
#include "DrawingAPI.h"

// Refined Abstraction
class CircleShape : public Shape {
public:
	CircleShape(float x, float y, float radius, DrawingAPI *drawingApi);
	Shape* draw();
	Shape* resize(float scale);
private:
	float _x, _y, _radius;
	DrawingAPI *_drawingApi;
};

#endif