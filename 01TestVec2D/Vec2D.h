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
	// ������ת��Ϊ�ַ�����ʽ��ʾ
	std::string toString();
	// �����ӷ�
	Vec2D add(const Vec2D& secongVec2D);
	Vec2D add(double numeral);
	Vec2D operator+ (const Vec2D& secondVec2D);
	Vec2D operator+ (const double numeral);
	Vec2D& operator+= (const Vec2D& secondVec2D);
	// ��ȡ���޸�Ԫ��
	double& at(const int index);
	double& operator[] (const int& index);
	int compareTo(Vec2D secondVec2D);
	Vec2D& decrease();
	// �Լ�
	double direction();
	// ���
	double dot(const Vec2D& secondvec2D);
	// �Լ�
	Vec2D& increase();
	double magnitude();
	// ����
	Vec2D multiply(double multiplier);
	double operator* (const Vec2D& secondVec2D);
	Vec2D operator* (const double multiplier);
	friend Vec2D operator* (double multiplier, Vec2D vec2d);	// �ǳ�Ա����
	// ��ֵ
	Vec2D negative();
	// ����
	Vec2D subtract(const Vec2D& secondVec2D);
	Vec2D subtract(double numeral);
	Vec2D operator- (const Vec2D& secondVec2D);
	Vec2D operator- (const double numeral);
	Vec2D& operator-= (const Vec2D& secondVec2D);
};

