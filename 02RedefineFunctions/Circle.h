#pragma once
#include "Shape.h"
class Circle :public Shape {
private:
	double radius;
public:
	Circle();
	Circle(double radius, Color color, bool filled);
	double getArea();
	double getRadius() const;	//常函数，函数内不修改数据成员的值
	void setRadius(double radius);

	string toString();
};
