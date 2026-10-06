// 编程题 1 · 9×9 乘法表（for 版）—— 最终版，输出与题目样例一致
#include <iostream>
#include <iomanip>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << "\u00D7" << i << "=" << std::setw(2) << j*i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
