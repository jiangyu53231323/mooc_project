// 04FileOpenMode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

int main()
{
    using fo = std::ios;
    fs::path p1{ "city1.txt" }, p2{ "city2.txt" };
    std::ofstream out1{ p1,fo::out | fo::app };
    std::ofstream out2{ p2,fo::out | fo::trunc };

    char c;
    while (!std::cin.get(c).eof()) {
        out1.put(c);
        out2.put(c);
    }

    out1.close();
    out2.close();

    std::fstream in1{ p1,fo::in };
    std::fstream in2{ p2,fo::in | fo::ate };

    std::cout << p1 << std::endl;
    while (!in1.get(c).eof()) {
        std::cout << c;
    }

    std::cout << p2 << std::endl;
    while (!in2.get(c).eof())
    {
        std::cout << c;
    }

    in1.close();
    in2.close();
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
