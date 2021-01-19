#include <iostream>

int main()
{
    char a[] = "Hello world";
    char b[] = "wor";

    std::cout << *(a+1) << " " << a;
    std::cout << *(b+1) << " " << b;



//    int i = 0;
//    while(*(a+i) != '\0')
//    {
//        std::cout << a[i] << " ";
//        i++;
//    }

    return 0;
}