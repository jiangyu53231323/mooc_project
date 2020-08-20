#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <exception>

class Vec2D
{
	double x_;
	double y_;
public:
	Vec2D();
	Vec2D(double x, double y);
	~Vec2D();
	// 将向量转换为字符串形式表示
	std::string toString();
	// 向量加法
	Vec2D add(Vec2D secongVec2D);
	Vec2D add(double numeral);
	double& at(const int index);
	int compareTo(Vec2D secondVec2D);
	Vec2D& decrease();
	double direction();
	double dot(Vec2D secondvec2D);
	Vec2D& increase();
	double magnitude();
	Vec2D multiply(double multiplier);
	Vec2D negative();
	Vec2D subtract(Vec2D secondVec2D);
	Vec2D subtract(double numeral);
};

