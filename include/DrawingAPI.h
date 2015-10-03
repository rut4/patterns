#ifndef DRAWING_API_CLASS
#define DRAWING_API_CLASS

#include <stdio.h>

// Implementor
class DrawingAPI {
public:
	virtual void drawCircle(float x, float y, float radius) = 0;
};

#endif