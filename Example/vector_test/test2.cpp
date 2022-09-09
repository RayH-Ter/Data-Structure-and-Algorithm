#include <iostream>
int main(int agrc, char* agrv[])
{
    // int b = 0;
    // int& a = b;
    // b = 1;
    // std::cout << a << std::endl;
    // return 0;
    int b = 0;
    int* a = &b;
    *a = 1;
    std::cout << b << std::endl;
    return 0;
}