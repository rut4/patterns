#include "DrawingAPI1.h"
#include "DrawingAPI2.h"
#include "CircleShape.h"
#include "Iterator.h"

int main() {
	DrawingAPI *api1 = new DrawingAPI1(),
		*api2 = new DrawingAPI2();

    Shape** items = new Shape*[2];
    items[0] = new CircleShape(1, 2, 3, api1);
    items[1] = new CircleShape(4, 5, 6, api2);

    Iterator<Shape*> it(items, 2);

    while (it.hasNext()) {
  		it.next()->resize(1.5)->draw();
    }

	return 0;
}