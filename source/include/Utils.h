// Utils.h
// 通用工具库头文件
#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <string>

namespace Utils
{
    namespace Out
    {
        // 程序正常信息输出
        // 待打印的文本信息
        void PrintMsg(const std::string& message);

        // 程序错误信息输出
        // 错误描述文本
        void PrintError(const std::string& message);
    } // namespace Out
} // namespace Utils

#endif // !UTILS_H