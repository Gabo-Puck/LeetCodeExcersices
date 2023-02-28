#include <iostream>
#include <vector>

// By MelkorGodo / Gabo-Puck
// 26-02-2023
int findMaxConsecutiveOnes(std::vector<int> &nums)
{
    int temp = 0;
    int max = 0;
    for (int num : nums)
    {
        if (num == 1)
        {
            temp++;
            if (temp > max)
                max = temp;
        }
        else
        {
            temp = 0;
        }
    }
    return max;
}

int main()
{
    std::vector<int> i = {1, 0, 1, 1, 0, 1};
    std::cout << findMaxConsecutiveOnes(i);
}