#include <bits/stdc++.h>
#include <iostream>
#include <iterator>

std::vector<int> runningSum(std::vector<int> &nums)
{
    std::vector<int>::iterator it = nums.begin();
    int ac = 0;
    while (it != nums.end())
    {
        ac = ac + *it;
        *it = ac;
        it++;
    }
    return nums;
}

void imprimir(std::vector<int> s)
{
    std::vector<int>::iterator it = s.begin();
    while (it != s.end())
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> as = {1, 2, 3, 4, 5, 6, 7, 8};
    imprimir(as);
    runningSum(as);
    imprimir(as);
}