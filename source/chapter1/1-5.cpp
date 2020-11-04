#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book1, book2;
    std::cin >> book1 >> book2;
    if (book1.isbn() == book2.isbn()) {
        std::cout << "book isbn is same" << std::endl;
    } else {
        std::cout << book1.isbn() << book2.isbn() << std::endl;
        return -1;
    }
    return 0;
}