#ifndef DRAWING_API_1_CLASS
#define DRAWING_API_1_CLASS

#include "DrawingAPI.h"

// ConcreteImplementor 1/2
class DrawingAPI1 : public DrawingAPI {
public:
	void drawCircle(float x, float y, float radius);
};

#endif