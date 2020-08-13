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
	Shape(Color color, bool filled) {
		this->color = color;
		this->filled = filled;
	}
	Color getColor() { return color; }
	void setColor(Color color) { this->color = color; }
	bool isFilled() { return filled; }
	void setFilled(bool filled) { this->filled = filled; }
	string tostring() {
		std::array<string, 6> c{ "white"s,"black"s,"red"s,"green"s,"blue"s,"yellow"s };
		return "Shape: " + c[static_cast<int>(color)] + " " + (filled ? "filled"s : "not filled");
	}

private:
	Color color{ Color::black };
	bool filled{ false };
};

