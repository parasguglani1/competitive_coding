/*
    Time Complexity: O(N)
    Space complexity: O(1)

    Where 'N' is the number of nodes in the linked list.
*/
#include <bits/stdc++.h>
using namespace std;

bool detectAndRemoveCycle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    //  Slow Pointer - This will be incremented by 1 Nodes
    Node *slow = head->next;

    //  Fast Pointer  - This will be incremented by 2 Nodes
    Node *fast = head->next->next;

    while (slow != fast)
    {
        // We reached the end of the List and haven't found any Cycle
        if (fast == NULL || fast->next == NULL)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }

    // We found a cycle
    slow = head;

    // If cycle starts from head
    if (slow == fast)
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }
    }

    else
    {
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }

    fast->next = NULL;

    return true;
}
