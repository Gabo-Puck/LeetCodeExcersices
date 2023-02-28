#include <iostream>
#include <vector>
#include <stack>
// By MelkorGodo / Gabo-Puck
// 27-02-2023
int maxProfit(std::vector<int> &prices)
{
    std::vector<int>::iterator it = prices.begin();
    int profit = 0;
    int min = INT32_MAX;
    while (it != prices.end())
    {
        if (*it < min)
        {
            min = *it;
        }
        else if (*it - min > profit)
        {
            profit = *it - min;
        }
        it++;
    }

    return profit;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::vector<int> values = {7, 1, 5, 10, 3, 2, 22, 9};
    std::cout << "PROFIT:" << maxProfit(values) << std::endl;
    return 0;
}
