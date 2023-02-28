#include <iostream>
#include <vector>
// By MelkorGodo / Gabo-Puck
// 26-02-2023
int findNumbers(std::vector<int> &nums)
{
    int evenCount = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int digits = 0;

        while (nums[i] > 0)
        {
            digits++;
            nums[i] /= 10;
        }
        evenCount += !(digits & 1);

        // if ((digits & 1) == 0)
        //     evenCount++;
    }
    return evenCount;
}

int main()
{
    // std::vector<int> x = {12, 345, 2, 6, 7896};
    std::vector<int> x = {555, 901, 482, 1771};
    int count = findNumbers(x);
    std::cout << "numbers with even number of digits: " << count;
    return 1;
}