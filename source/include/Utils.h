// Utils.h
// 通用工具库头文件
// 功能：MIME 类型定义、日志输出、文件读取、控制台输入
//        子命名空间：Utils::Json（JSON解析）、Utils::Auth（Token认证）

#ifndef UTILS_H
#define UTILS_H
#include <iostream> // 输入输出流
#include <string>   // 处理字符串

namespace Utils
{
    namespace out
    {
        void out_GW(std::string);       // 程序正常输出
        void out_error(std::string); // 程序执行异常输出
    }
}
#endif //! UTILS_H