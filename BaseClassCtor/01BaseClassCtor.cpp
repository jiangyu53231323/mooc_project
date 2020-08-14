// BaseClassCtor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using std::cout;
using std::endl;

//ctor:构造函数
//dtor:析构函数

class B {
public:
	B() { cout << "B()" << endl; }
	B(int i) { cout << "B(" << i << ")" << endl; }
	B(char c) { cout << "B(" << c << ")" << endl; }
};

class E {
public:
	E() { cout << "E()" << endl; }
};

class D :public B {
public:
	using B::B;
	D() { cout << "D()" << endl; }
	//D(int i):B(i){}
	//D(char c){}
	//D(double x) :B(static_cast<int>(x)), x{ 1.0 }{cout << "D(" << x << ")" << endl; }
	D(double x) :e1{}, e2{}, B(static_cast<int>(x)) { cout << "D(" << x << ")" << endl; }
private:
	double x{ 0.0 };
	E e1, e2;
};



int main()
{
	B b;
	D d;
	D d2(3.03);
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
