// 编程题 1 · 9×9 乘法表（while 版）—— 最终版，输出与题目样例一致
#include <iostream>
#include <iomanip>

int main() {
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= i) {
            std::cout << j << "\u00D7" << i << "=" << std::setw(2) << j*i << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
