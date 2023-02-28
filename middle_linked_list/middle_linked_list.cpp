#include <iostream>
// By MelkorGodo / Gabo-Puck
// 26-02-2023

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *middleNode(ListNode *head)
{
    ListNode *middle = head;
    ListNode *next = head;

    while (next != nullptr && next->next != nullptr)
    {
        next = next->next->next;
        middle = middle->next;
    }
    return middle;
}

int main()
{
}