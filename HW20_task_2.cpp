#include <iostream>

void rotate_list(int* ptr)
{
    int tmp_list[10]={};

    for(int i = 0 ; i < 10; i++)
    {
        tmp_list[i] = *(ptr+9-i);
    }

    for(int i = 0 ; i < 10; i++)
    {
        *(ptr+i) = tmp_list[i];
    }
}

int main()
{
    int list[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i < 10; i++)
    {
        std::cout << list+i << " " << *(list+i) << std::endl;
    }

    rotate_list(list);

    std::cout << std::endl;

    for(int i = 0; i < 10; i++)
    {
        std::cout << list+i << " " << *(list+i) << std::endl;
    }

}