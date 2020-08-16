// 01PathQuery.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;
namespace fs = std::filesystem;
int main()
{
    fs::path p{ R"(E:\c_project\vs_project\Test2\01PathQuery\01PathQuery.cpp)" };
    if (p.empty()) {
        cout << "Path " << p << " is empty." << endl;
    }
    if (!fs::exists(p)) {
        cout << "path " << p << " does not exist." << endl;
        std::exit(0);
    }

    cout << "root_name(): " << p.root_name() << "\n"
        << "root_path():" << p.root_path() << "\n"
        << "relative_path():" << p.relative_path() << "\n";
    cout << "parent_path(): " << p.parent_path() << "\n"
        << "filename(): " << p.filename() << "\n"
        << "stem(): " << p.stem() << "\n"
        << "extension(): " << p.extension() << endl;
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
