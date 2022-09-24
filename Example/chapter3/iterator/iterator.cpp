#include <iostream>
#include <vector>
#include <list>
#include <array>
#include <set>

int main()
{
    // std::vector<int> A = {1, 2, 3};

    // for (std::vector<int>::iterator A_it = A.begin(); A_it != A.end(); ++A_it)
    // {
        // std::cout << *A_it << ", ";
    // }
    // std::cout << "\b\b." << std::endl;

    std::list<double> B = {1.1, 2.2, 3.3};
    for (std::list<double>::iterator B_it = B.begin(); B_it != B.end(); ++B_it)
    {
        std::cout << *B_it << ", ";
    }
    std::cout << "\b\b." << std::endl;
    return 0;
};