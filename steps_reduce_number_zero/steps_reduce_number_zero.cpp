#include <iostream>
// By MelkorGodo / Gabo-Puck
// 26-02-2023
int numberOfSteps(int num)
{
    int steps = 0;
    while (num > 0)
    {
        // 0000 0
        // 0001 1
        // 0010 2
        // 0011 3
        // 0100 4
        // 0101 5
        // 0110 6

        if ((num & 1) == 0)
            num = num >> 1;
        else
            num--;
        steps++;
    }
    return steps;
}
int main()
{
    std::cout << numberOfSteps(8);
}