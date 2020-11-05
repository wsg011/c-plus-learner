#include <iostream>

int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << u + i << std::endl;

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;

    // 2.1.3 string anda char
    std::cout << "hello word "
                 "ni hao " << std::endl;

    // bool
    bool test = false;

    return 0;
}