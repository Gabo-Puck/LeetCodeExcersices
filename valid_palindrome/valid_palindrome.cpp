#include <iostream>
#include <stack>
bool isPalindrome(std::string &s)
{
    int left = 0;
    int right = s.size() - 1;
    while (right > 0)
    {
        char leftChar = tolower(s[left]);
        char rightChar = tolower(s[right]);

        while (!isalnum(leftChar) && left < s.size() - 1)
        {
            left++;
            leftChar = tolower(s[left]);
        }
        while (!isalnum(rightChar) && right > 0)
        {
            right--;
            rightChar = tolower(s[right]);
        }
        if (leftChar != rightChar && (isalnum(leftChar) && isalnum(rightChar)))
            return false;
        right--;
        left++;
    }

    return true;
}

int main(int argc, char const *argv[])
{
    /* code */
    std::string zorro = ".,";

    bool x = isPalindrome(zorro);
    std::cout << "RESULT 1: " << x << std::endl;
    std::string zorro1 = ".,";

    bool x1 = isPalindrome(zorro);
    std::cout << "RESULT 2: " << x1 << std::endl;
    std::string zorro2 = "anita lava la tina";

    bool x2 = isPalindrome(zorro);
    std::cout << "RESULT 3: " << x2 << std::endl;
    // std::cout << zorro << std::endl;
    // std::cout << x;
    return 0;
}
