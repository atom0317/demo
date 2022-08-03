#include <iostream>
#include "caculate.h"

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int val1 = 15;
    int val2 = 20;

    std::cout << "Before swap" << std::endl;
    std::cout << "val1 = " << val1 << std::endl;
    std::cout << "val2 = " << val2 << std::endl;
    swap(val1, val2);
    std::cout << "After swap" << std::endl;
    std::cout << "val1 = " << val1 << std::endl;
    std::cout << "val2 = " << val2 << std::endl;

    std::cout << "result : " << add(1, 2) << std::endl;

    return 0;
}