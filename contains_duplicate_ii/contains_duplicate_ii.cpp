#include <iostream>
#include <bits/stdc++.h>

// By MelkorGodo / Gabo-Puck
// 27-02-2023

// using hashmap
bool containsNearbyDuplicate(std::vector<int> &nums, int k)
{
    int i = 0;
    int size = nums.size();
    std::unordered_map<int, int> m;
    while (i < size)
    {
        if (m.count(nums[i]))
        {
            if (abs(m[nums[i]] - i) <= k)
                return true;
        }
        m[nums[i]] = i;

        i++;
    }
    return false;
}
int main()
{
    std::vector<int> v = {1, 2, 3, 1};
    std::cout << containsNearbyDuplicate(v, 0);
}