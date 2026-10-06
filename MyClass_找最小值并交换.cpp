// 编程题 2 · MyClass 成员函数 fun：找最小值并与末尾元素交换
// 作者：本人（按屏幕截图转录备份，2026-09-26）
// 测试：输入 5 34 1 2 56 4  →  输出 34 1 2 56 4 / 34 4 2 56 1
#include <iostream>

class Myclass {
public:
    void fun(int arr[], int n) {
        int minIndex = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        int t = arr[minIndex];
        arr[minIndex] = arr[n-1];
        arr[n-1] = t;
    }
};

int main() {
    int n;
    std::cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    Myclass obj;
    obj.fun(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
