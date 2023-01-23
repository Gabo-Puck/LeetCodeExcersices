#include <iostream>
#include <stdio.h>

int romanToInt(std::string s)
{
    int a = s.size() - 1;
    int total = 0;
    int sign = 1;
    char prev = '_';
    while (a >= 0)
    {
        char actual = s.at(a);
        std::cout << actual;
        if (prev == actual)
        {
            sign = 1;
        }
        if (actual == 'V')
        {
            total += 5;
        }
        if (actual == 'X')
        {
            total = (prev == 'C' || prev == 'L') ? total - 10 : total + 10;
        }
        if (actual == 'L')
        {
            total += 50;
        }
        if (actual == 'C')
        {
            total = (prev == 'M') ? total - 100 : total + 100;
        }
        if (actual == 'D')
        {
            total += 500;
        }
        if (actual == 'M')
        {
            total += 1000;
        }
        if (actual == 'I')
        {
            total = (prev == 'X' || prev == 'V') ? total - 1 : total + 1;
        }
        prev = actual;
        a--;
    }
    std::cout << "\nT: " << total;

    return 1;
}
int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "Running: " << argv[0] << std::endl;
    std::cout << "Input: " << argv[1] << std::endl;
    // romanToInt("XV");
    std::string d;
    std::cin >> d;
    romanToInt(d);
    // romanToInt(argv[1]);
    // romanToInt(argv[1]);
    return 0;
}
