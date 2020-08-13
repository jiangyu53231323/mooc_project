#include "Rectangle.h"

/* :width{w} 是构造函数初始化列表*/
Rectangle::Rectangle(double w, double h, Color c, bool f) :width{ w }, height{ h }, Shape{ c,f }{
	//Shape{ c,f };
}

double Rectangle::getWidth() const { return width; }
void Rectangle::setWidth(double w) { width = w; }
double Rectangle::getHeight() const { return height; }
void Rectangle::setHeight(double h) { height = h; }

double Rectangle::getArea() const { return width * height; }