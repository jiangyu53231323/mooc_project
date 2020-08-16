#pragma once
#include "Shape.h"
class Rectangle :public Shape {
public:
	Rectangle() = default;
	~Rectangle() = default;
	Rectangle(double w, double h, Color c, bool f);

	double getWidth() const;
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);
	double getArea() const;

	string toString();

private:
	double width{ 1.0 };
	double height{ 1.0 };
};
