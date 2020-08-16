// CheckPath.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;
int main()
{
	fs::path p1{ "E:\\c_project\\vs_project\\Test2\\CheckPath\\hello.txt" };
	fs::path p2{ R"(E:\c_project\vs_project\Test2\CheckPath\hello.txt)" };
	fs::path p3{ "E:/c_project/vs_project/Test2/CheckPath/hello.txt" };

	//输出默认文件分隔符
	//std::cout << "file separetor is: " << fs::path::preferred_separator << std::endl;

	//判断是否是常规文件，如果是，输出文件大小
	if (fs::is_regular_file(p2)) {
		std::cout << p2 << "'s size is: " << fs::file_size(p2) << std::endl;
	}
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory, includes: " << std::endl;
		for (auto& e : fs::directory_iterator(p2)) {
			std::cout << " " << e.path();
		}
	}

	//判断路径是否存在
	else if (fs::exists(p2)) {
		std::cout << p2 << " is a special file\n";
	}
	else {
		std::cout << p2 << " does not exist" << std::endl;
	}
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
