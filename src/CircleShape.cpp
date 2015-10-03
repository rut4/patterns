#include "CircleShape.h"

CircleShape::CircleShape(float x, float y, float radius, DrawingAPI *drawingApi) :
	_x(x), _y(y), _radius(radius), _drawingApi(drawingApi) {
}

Shape* CircleShape::draw() {
	this->_drawingApi->drawCircle(this->_x, this->_y, this->_radius);
	return this;
}

Shape* CircleShape::resize(float scale) {
	this->_radius *= scale;
	return this;
}
