// BufferedIO.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{   // 拿到cin对象的缓冲区指针
    auto p = std::cin.rdbuf();
    // 从键盘读入字符到缓冲区，保留所有字符在缓冲区
    auto x = std::cin.peek();
    std::cout << "x = " << x << std::endl;
    // 显示缓冲区中的字符数量
    auto count{ p->in_avail() };
    std::cout << "there are " << count << " characters in the buffer." << std::endl;
    // 把缓冲区的字符都取出来并显示
    
    for (int i = 0; i < count; i++) {
        std::cout << i + 1 << ": " << std::cin.get() << std::endl;
    }

    return (0);
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
