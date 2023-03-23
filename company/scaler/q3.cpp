ListNode *solve(ListNode *A)
{
    ListNode *head = A;
    while (A->next != NULL)
    {
        int gcd = __gcd(A->val, A->next->val);
        ListNode *temp = A->next;
        ListNode *nn = new ListNode(gcd);
        A->next = nn;
        nn->next = temp;
        A = temp;
    }
    return head;
}
