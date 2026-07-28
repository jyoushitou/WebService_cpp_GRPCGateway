// Utils.cpp
// 通用工具实现文件
// 功能：日志输出、文件读取、MIME 类型识别、JSON解析（Utils::Json）、Token认证（Utils::Auth）

#include "Utils.h"

namespace Utils
{
    namespace Out
    {
        void PrintMsg(const std::string& message) // 程序正常输出
        {
            std::cout << "[GW]" << message << std::endl;
        }

        void PrintError(const std::string& message) // 程序执行异常输出
        {
            std::cerr << "[error]" << message << std::endl;
        }
    } // namespace Out
} // namespace Utils