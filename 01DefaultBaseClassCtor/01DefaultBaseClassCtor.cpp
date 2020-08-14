// 01DefaultBaseClassCtor.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using std::cout;
using std::endl;

//基类默认构造函数的作用
class A {
public:
    A() { cout << "A()" << endl; }
    A(int i) { cout << "A(" << i << ")" << endl; }
};

class B :public A{
public:
    B() { cout << "B()" << endl; }
    B(int j):A(j) { cout << "B(" << j << ")" << endl; }
};

int main()
{
    A a1{};
    A a2{ 1 };
    B b1{};
    B b2{ 2 };
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
