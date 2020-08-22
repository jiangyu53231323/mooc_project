#include "Vec2D.h"

Vec2D::Vec2D() {
	x_ = 0.0;
	y_ = 0.0;
}

Vec2D::Vec2D(double x, double y) {
	x_ = x;
	y_ = y;
}

Vec2D::~Vec2D() {

}

// 将向量转换为字符串形式表示
std::string Vec2D::toString()
{
	// TODO: 在此处添加实现代码.
	return std::string("(" + std::to_string(x_) + ", "
		+std::to_string(y_)+")");
}


// 向量加法
Vec2D Vec2D::add(const Vec2D& secongVec2D)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_+secongVec2D.x_,y_+secongVec2D.y_);
}

Vec2D Vec2D::add(double numeral) {
	return Vec2D(this->x_ + numeral, this->y_ + numeral);
}

Vec2D Vec2D::operator+ (const Vec2D& secondVec2D) {
	return this->add(secondVec2D);
}
Vec2D Vec2D::operator+ (const double numeral) {
	return this->add(numeral);
}

// 读取或者修改向量元素
double& Vec2D::at(const int index)
{
	// TODO: 在此处添加实现代码.
	if (0 == index) return x_;
	else if (1 == index) return y_;
	else throw std::out_of_range("at() only accept 1 or 2 as parameter");
}


int Vec2D::compareTo(Vec2D secondVec2D)
{
	// TODO: 在此处添加实现代码.
	double m1 = this->magnitude();
	double m2 = secondVec2D.magnitude();
	if (abs(m1 - m2) < 1e-10) return 0;
	else return(m1 > m2 ? 1 : -1);
}


Vec2D& Vec2D::decrease()
{
	// TODO: 在此处添加实现代码.
	x_--; y_--;
	return *this;
}


double Vec2D::direction()
{
	// TODO: 在此处添加实现代码.
	return atan(y_ / x_);
}

// 向量点积
double Vec2D::dot(const Vec2D& secondvec2D)
{
	// TODO: 在此处添加实现代码.
	return (x_ * secondvec2D.x_ + y_ * secondvec2D.y_);
}


Vec2D& Vec2D::increase()
{
	// TODO: 在此处添加实现代码.
	x_++; y_++;
	return (*this);
}


double Vec2D::magnitude()
{
	// TODO: 在此处添加实现代码.
	return sqrt(x_ * x_ + y_ * y_);
}

// 向量数乘
Vec2D Vec2D::multiply(double multiplier)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_*multiplier,y_*multiplier);
}

double Vec2D::operator*(const Vec2D& secondVec2D) {
	return this->dot(secondVec2D);
}

Vec2D Vec2D::operator* (const double multiplier) {
	return this->multiply(multiplier);
}

Vec2D operator* (double multiplier, Vec2D vec2d) {
	return vec2d.multiply(multiplier);
}

// 向量求负值
Vec2D Vec2D::negative()
{
	// TODO: 在此处添加实现代码.
	return Vec2D(-x_,-y_);
}


Vec2D Vec2D::subtract(const Vec2D& secondVec2D)
{
	// TODO: 在此处添加实现代码.
	return Vec2D(x_ - secondVec2D.x_,y_-secondVec2D.y_);
}

Vec2D Vec2D::subtract(double numeral) {
	return Vec2D(x_ - numeral, y_ - numeral);
}

Vec2D Vec2D::operator- (const Vec2D& secondVec2D) {
	return this->subtract(secondVec2D);
}
Vec2D Vec2D::operator- (const double numeral) {
	return this->subtract(numeral);
}
