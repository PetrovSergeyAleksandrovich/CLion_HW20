#include <iostream>

int* rotate_list(const int* ptr_1, int* ptr_2)
{
    for(int i = 0 ; i < 10; i++)
    {
        *(ptr_2+i) = *(ptr_1+9-i);
    }
    return ptr_2;
}

int main()
{
    int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int list_new[10] = {};

    std::cout << "INIT LIST with init pointers:" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << list+i << " " << *(list+i) << std::endl;
    }

    rotate_list(list, list_new);
    std::cout << std::endl;

    std::cout << "RESULT LIST with new pointers:" << std::endl;
    for(int i = 0; i < 10; i++)
    {
        std::cout << list_new+i << " " << *(list_new+i) << std::endl;
    }

}