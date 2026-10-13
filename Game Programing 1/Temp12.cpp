#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand((unsigned int)time(NULL));

    int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "シャッフル前: ";
    for (int i = 0; i < size; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    // Fisher-Yates シャッフルアルゴリズム
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    std::cout << "シャッフル後: ";
    for (int i = 0; i < size; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}