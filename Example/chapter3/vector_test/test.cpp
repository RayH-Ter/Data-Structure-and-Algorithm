#include <iostream>
#include <vector>
#include <list>

int main(int agrc, char* agrv[])
{
    std::vector<double> A(10);
    for(int i = 0; i < 10; i++)
    {
        A[i] = i + 0.1;
    }
    std::vector<double>::iterator A_iterator = A.begin();
    std::vector<double>::iterator A_end = A.end();

    for(; A_iterator != A_end; ++A_iterator)
    {
        std::cout << *A_iterator << ", ";
    }
    std::cout << "\b\b." << std::endl;

    std::list<double> B;
    for(int i = 0; i < 10; i++)
    {
        B.push_back(i + 0.1);
    }

    std::list<double>::iterator B_iterator = B.begin();
    std::list<double>::iterator B_end = B.end();

    for(; B_iterator != B_end; ++B_iterator)
    {
        std::cout << *B_iterator << ", ";
    }
    std::cout << "\b\b." << std::endl;

    return 0;
}