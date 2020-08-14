#pragma once
#include "Shape.h"
class Circle :public Shape {
private:
	double radius;
public:
	Circle();
	Circle(double radius, Color color, bool filled);
	double getArea();
	double getRadius() const;	//�������������ڲ��޸����ݳ�Ա��ֵ
	void setRadius(double radius);

	string toString();
};
