#include <bits/stdc++.h>
#include <iostream>

std::vector<std::string> fizzBuzz(int n)
{
    std::vector<std::string> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ans[i] = "FizzBuzz";
        else if (i % 3 == 0)
            ans[i] = "Fizz";
        else if (i % 5 == 0)
            ans[i] = "Buzz";
        else
            ans[i] = std::to_string(i);
    }
    for (int i = 0; i < n; i++)
        std::cout << ans[i] << " ";
    return ans;
}
int main()
{
    fizzBuzz(16);
}