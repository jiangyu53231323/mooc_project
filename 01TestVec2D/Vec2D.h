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
	Vec2D add(const Vec2D& secongVec2D);
	Vec2D add(double numeral);
	Vec2D operator+ (const Vec2D& secondVec2D);
	Vec2D operator+ (const double numeral);
	Vec2D& operator+= (const Vec2D& secondVec2D);
	// 读取或修改元素
	double& at(const int index);
	double& operator[] (const int& index);
	int compareTo(Vec2D secondVec2D);
	Vec2D& decrease();
	// 自减
	double direction();
	// 点积
	double dot(const Vec2D& secondvec2D);
	// 自加
	Vec2D& increase();
	double magnitude();
	// 数乘
	Vec2D multiply(double multiplier);
	double operator* (const Vec2D& secondVec2D);
	Vec2D operator* (const double multiplier);
	friend Vec2D operator* (double multiplier, Vec2D vec2d);	// 非成员函数
	// 求负值
	Vec2D negative();
	// 减法
	Vec2D subtract(const Vec2D& secondVec2D);
	Vec2D subtract(double numeral);
	Vec2D operator- (const Vec2D& secondVec2D);
	Vec2D operator- (const double numeral);
	Vec2D& operator-= (const Vec2D& secondVec2D);
};

