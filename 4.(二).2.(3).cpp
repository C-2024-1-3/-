

#include <iostream>
using namespace std;
void bubbleSort(int* a, int num) {
    int temp;
    for (int i = 0; i <num-1; i++) {
        for (int j = 0; j <num - i-1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }

        }
    }
}
    int main()
    {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;

    // 动态分配数组内存
    int* arr = new int[size];
    cout << "请依次输入数组的元素: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // 调用排序函数
    bubbleSort(arr, size);

    // 通过指针方式输出数组元素
    cout << "排序后的数组元素为: ";
    for (int* ptr = arr; ptr < arr + size; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    // 释放数组内存
    delete[] arr;

    return 0;
}