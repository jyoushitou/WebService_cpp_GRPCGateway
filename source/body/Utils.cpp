// Utils.cpp
// 通用工具实现文件
// 功能：日志输出、文件读取、MIME 类型识别、JSON解析（Utils::Json）、Token认证（Utils::Auth）

#include "Utils.h"

namespace Utils
{
    namespace out
    {
        void out_GW(std::string str) // 程序正常输出
        {
            std::cout << "[GW]" << str << std::endl;
        }

        void out_error(std::string str) // 程序执行异常输出
        {
            std::cout << "[error]" << str << std::endl;
        }
    }
}