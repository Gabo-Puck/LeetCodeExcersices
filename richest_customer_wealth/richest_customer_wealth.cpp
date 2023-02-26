#include <bits/stdc++.h>
#include <iostream>
#include <iterator>

int maximumWealth(std::vector<std::vector<int>> &accounts)
{
    int max = 0;
    int r = 0, c = 0;

    while (r < accounts.size())
    {
        int acc = 0;
        while (c < accounts[r].size())
        {
            acc += accounts[r][c];
            c++;
        }
        if (acc > max)
            max = acc;
        r++;
        c = 0;
    }
    return max;
}

int main()
{
    std::vector<int> row1 = {2, 8, 7};
    std::vector<int> row2 = {7, 1, 3};
    std::vector<int> row3 = {1, 9, 5};
    std::vector<std::vector<int>> vec = {row1, row2, row3};
    std::cout << maximumWealth(vec) << std::endl;
}