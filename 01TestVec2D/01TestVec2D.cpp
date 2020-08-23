// 01TestVec2D.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
	TDD :测试驱动开发
*/

#include <iostream>
#include "Vec2D.h"
using std::cout;
using std::endl;

int main()
{
	// 创建向量对象
	Vec2D v1{ 3,5 }, v2{ 4,6 };
	// 向量转为字符串
	cout << "v1 = " << v1.toString() << endl;
	cout << "v2 = " << v2.toString() << endl;
	// 向量加法
	Vec2D v3 = v1 + v2;
	Vec2D v4 = v3 + 10.0;
	cout << "v3 = " << v3.toString() << endl;
	cout << "v4 = " << v4.toString() << endl;

	Vec2D va1{ 10,12 }, va2{ 1,2 };
	cout << "va1 += va2: " << (va1 += va2).toString() << endl;
	cout << "va1 -= va2: " << (va1 -= va2).toString() << endl;
	// 向量减法 点积 数乘
	//Vec2D v5 = v2.subtract(v1);
	//double v6 = v2.dot(v1);
	//Vec2D v7 = v3.multiply(2.1);
	Vec2D v5 = v2-v1;
	double v6 = v2*v1;
	Vec2D v7 = 2.1*v3;
	cout << "v2-v1= " << v5.toString() << endl;
	cout << "v2.v1= " << v6 << endl;
	cout << "v3*2.1= " << (v3*2.1).toString() << endl;
	cout << "2.1*v3= " << v7.toString() << endl;
	// 向量求负值
	Vec2D v8 = v2.negative();
	cout << "-v2= " << (-v2).toString() << endl;
	// 向量自增/自减
	//cout << "++v8 = " << v8.increase().toString() << endl;
	//cout << "--v2 = " << v2.decrease().toString() << endl;
	cout << "++v8 = " << (++v8).toString() << endl;
	cout << "v8++ = " << (v8++).toString() << endl;
	cout << "v8 = " << v8.toString() << endl;
	cout << "--v2 = " << v2.decrease().toString() << endl;
	// 读取或修改向量元素
	//cout << "v1.x_ = " << v1.at(0) << endl;
	//cout << "v1.y_ = " << v1.at(1) << endl;
	v1[0] = 31.1;
	cout << "v1.x_ = " << v1[0] << endl;
	cout << "v1.y_ = " << v1[1] << endl;
	/*v1[8] = 10.0;*/
	// 向量的长度magnitude 角度direction
	cout << "v1.magnitude = " << v1.magnitude() << endl;
	cout << "double(v1) = " << static_cast<double>(v1) << endl;
	cout << "v1.direction = " << v1.direction() << endl;
	// 比较两个向量
	cout << "v1 compare v2 : " << v1.compareTo(v2) << endl;

	cout << "please input a Vec2D: ";
	Vec2D v9;
	std::cin >> v9;	// operator>>(std::cin,v9)
	cout << v9 << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
