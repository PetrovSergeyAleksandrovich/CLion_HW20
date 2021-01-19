#include <iostream>

void swap(int* ptr_x, int* ptr_y)
{
    int tmp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = tmp;
}

int main()
{
    int a = 1, b = 100;
    std::cout << "Before: " << a << " " << b << std::endl;
    swap(&a, &b);
    std::cout << "After: " << a << " " << b;
}
