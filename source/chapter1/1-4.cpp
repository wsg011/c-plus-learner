# include <iostream>

int main()
{
    int sum = 0, val = 1;
    while (val <= 10)
    {
        sum += val;
        ++val;
    }
    std::cout << "sum of 1 to 10: " << sum << std::endl;

    // for statement
    for (int i=0; i<10; ++i)
    {
        std::cout << i << std::endl;
    }

    // if statement
    int currVal = 0;
    std::cin >> currVal;
    if (currVal > 10) {
        std::cout << "currVal bigger than 10." << std::endl;
    } else {
        std::cout << "currVal smaller than 10." << std::endl;
    }
    return 0;
}