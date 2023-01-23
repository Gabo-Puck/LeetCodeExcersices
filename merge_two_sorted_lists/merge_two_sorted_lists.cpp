#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    std::string name;
    void printList();
};

void ListNode::printList()
{
    std::cout << name << std::endl;
    ListNode *nextNode = this;
    int i = 0;
    while (nextNode != nullptr)
    {
        i++;
        std::cout << "Item at position " << i << ": " << nextNode->val << std::endl;
        nextNode = nextNode->next;
    }
    std::cout << std::endl;
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *bigger;
    ListNode *smaller;
    // We find out which list's head is bigger
    if (list1 == nullptr)
    {
        return list2;
    }
    if (list2 == nullptr)
    {
        return list1;
    }
    if (list2 == nullptr && list1 == nullptr)
    {
        return nullptr;
    }
    if (list1->val >= list2->val)
    {
        bigger = list1;
        smaller = list2;
    }
    else
    {
        bigger = list2;
        smaller = list1;
    }

    // Now we add the items from the "bigger" list to the "smaller" list
    ListNode *actualSmaller = smaller;
    ListNode *actualBigger = bigger;
    ListNode *last;

    while (actualBigger != nullptr && actualSmaller->next != nullptr)
    {
        if (actualSmaller->next == nullptr)
        {
            actualSmaller->next = actualBigger;
            break;
        }
        if (actualBigger->val <= actualSmaller->next->val)
        {
            // do the change
            ListNode *tmp = actualSmaller->next;
            ListNode *tmp2 = actualBigger->next;
            actualSmaller->next = actualBigger;
            actualBigger->next = tmp;
            actualSmaller = actualSmaller->next;
            actualBigger = tmp2;
            last = actualSmaller;
            break;
        }
        else
        {
            actualSmaller = actualSmaller->next;
        }
    }

    return smaller;
}

int main(int argc, char const *argv[])
{
    // Creating nodes for list 1
    ListNode *a1 = new ListNode(1);
    ListNode *b1 = new ListNode(2);
    ListNode *c1 = new ListNode(30);
    ListNode *d1 = new ListNode(41);

    // Linking nodes for list 1
    a1->next = b1;
    a1->name = "List 1";
    b1->next = c1;
    c1->next = d1;

    // Creating nodes for list 2
    ListNode *a2 = new ListNode(31);
    ListNode *b2 = new ListNode(50);
    // ListNode *c2 = new ListNode(30);
    // ListNode *d2 = new ListNode(122);

    // Linking nodes for list 2
    a2->next = b2;
    a2->name = "List 2";
    // b2->next = c2;
    // c2->next = d2;
    // Print list before merge
    a1->printList();
    a2->printList();
    // Merging list
    ListNode *c = mergeTwoLists(a1, a2);
    c->name = "Sorted List";
    c->printList();
    return 0;
}
