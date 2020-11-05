#include <iostream>

/*
* Variables
*/
double applyDiscount(double price, double rate)
{
    return price * rate;
}

int main()
{
    double price = 109.99;
    double rate = 0.8;

    double salePrice = applyDiscount(price, rate);

    std::cout << salePrice << std::endl;

    // list
    int units_sold = 0;
    int units_sold_list = {0};
    std::cout << units_sold << units_sold_list << std::endl;

    // 2.2.3 Indentifier

    // 2.2.4 
    int sum = 0;
    for (int val = 0; val <= 10; ++val) {
        sum += val;
    }
    std::cout << sum << std::endl;

    // nested scopes
    // 作用域，最近的一个区域
    int i = 100, sun = 0;
    for (int i = 0; i <= 10; ++i) {
        sun += i;
    }
    std::cout << sun << std::endl;
    return 0;
}