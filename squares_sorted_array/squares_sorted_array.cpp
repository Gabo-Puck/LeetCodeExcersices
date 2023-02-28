#include <iostream>
#include <vector>

// By MelkorGodo / Gabo-Puck
// 26-02-2023
// two pointers
std::vector<int> sortedSquares(std::vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;
    std::vector<int> numsSquared;
    int size = nums.size() - 1;
    while (size > 0)
    {
        int leftNumber = nums[left] * nums[left];
        int rightNumber = nums[right] * nums[right];
        if (rightNumber >= leftNumber)
        {
            numsSquared.insert(numsSquared.begin(), rightNumber);
            right--;
        }
        else
        {
            numsSquared[size] = leftNumber;
            left++;
        }
    }
    return numsSquared;
}
int main()
{
    std::vector<int> d = {-7, -3, 2, 3};
    sortedSquares(d);
}