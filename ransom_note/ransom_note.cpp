#include <iostream>
#include <bits/stdc++.h>
// By MelkorGodo / Gabo-Puck
// 26-02-2023
// hashmap
bool canConstruct(std::string ransomNote, std::string magazine)
{
    if (ransomNote.length() > magazine.length())
        return false;
    std::unordered_map<char, int> m;
    for (char letter : magazine)
    {
        m[letter]++;
    }
    for (char letter : ransomNote)
    {
        if (m[letter] == 0)
            return false;
        else
            m[letter]--;
    }
    return true;
}
int main()
{
    canConstruct("gola", "guadalajara");
    return 1;
}