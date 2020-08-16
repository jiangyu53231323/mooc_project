#pragma once
#include <iostream>
#include <string>
#include <array>
using std::string;
using namespace std::string_literals;  //"xxx"s 自动转化为string类型的对象
enum class Color {
	white, black, red, green, blue, yellow,
};

class Shape
{
public:
	Shape() = default;
	~Shape() = default;
	Shape(Color color, bool filled);
	Color getColor();
	void setColor(Color color);
	bool isFilled();
	void setFilled(bool filled);
	string toString();
	string colorToString();
	string filledToString();

	virtual double getArea() = 0;

private:
	Color color{ Color::black };
	bool filled{ false };
	std::array<string, 6> colorNames{ "white"s,"black"s,"red"s,"green"s,"blue"s,"yellow"s };
};

