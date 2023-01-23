#include <stdio.h>
#include <iostream>
#include <stack>
#include <list>

bool isValid(std::string input)
{
    std::string::iterator it;
    std::stack<char> open;
    it = input.begin();
    while (it != input.end())
    {
        std::cout << *it << " ";
        if (*it == '{' || *it == '[' || *it == '(')
        {
            open.push(*it);
        }
        else
        {
            if (open.empty())
            {
                return false;
            }
            char lastOpen = open.top();
            open.pop();
            if (lastOpen == '{' && *it != '}')
            {
                return false;
            }
            if (lastOpen == '(' && *it != ')')
            {
                return false;
            }
            if (lastOpen == '[' && *it != ']')
            {
                return false;
            }
        }
        it++;
    }
    return open.empty();
}
int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "String valid:" << isValid("]") << std::endl;
    return 0;
}
