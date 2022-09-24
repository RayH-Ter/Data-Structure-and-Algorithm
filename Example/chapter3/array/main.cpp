#include <iostream>
#include "Array.h"

int main(int argc, char* agrv[])
{
    Array<int> a;
    a.insert(0, 34);
    a.printArray();
    a.insert(0, 12);
    a.printArray();
    a.insert(0, 52);
    a.printArray();
    a.insert(0, 16);
    a.printArray();
    a.insert(0, 12);
    a.printArray();
    a.remove(4);
    a.printArray();
    return 0;
};