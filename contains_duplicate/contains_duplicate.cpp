#include <map>
#include <vector>
#include <bits/stdc++.h>
#include <iostream>
// By MelkorGodo / Gabo-Puck
// 27-02-2023
// Using hashmap
bool containsDuplicate(std::vector<int> &nums)
{
    // std::set<int> numbers;
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return true;
        // if (numbers.insert(nums[i]).second == false)
        //     return true;
        // if (numbers[nums[i]] == true)
        // {
        //     return true;
        // }
        // numbers[nums[i]] = true;
    }
    return false;
}

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 1};
    std::cout << containsDuplicate(v);
    return 1;
}