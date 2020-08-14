#include "Shape.h"
Shape::Shape(Color color, bool filled) {
	this->color = color;
	this->filled = filled;
}
Color Shape::getColor() { return color; }
void Shape::setColor(Color color) { this->color = color; }
bool Shape::isFilled() { return filled; }
void Shape::setFilled(bool filled) { this->filled = filled; }
string Shape::toString() {
	return "shape: " + colorToString() + " " + filledToString();
}
string Shape::colorToString() {
	return colorNames[static_cast<int>(color)];
}

string Shape::filledToString() {
	return (filled ? "filled"s : "not filled"s);
}