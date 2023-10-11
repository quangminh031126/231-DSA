LLNode *addLinkedList(LLNode *l0, LLNode *l1)
{
    // STUDENT ANSWER
    int carry = 0;
    LLNode *dummy = new LLNode(); // Dummy node to simplify code
    LLNode *current = dummy;

    while (l0 != nullptr || l1 != nullptr)
    {
        int x = (l0 != nullptr) ? l0->val : 0;
        int y = (l1 != nullptr) ? l1->val : 0;

        int sum = x + y + carry;
        carry = sum / 10;

        current->next = new LLNode(sum % 10);
        current = current->next;

        if (l0 != nullptr)
            l0 = l0->next;
        if (l1 != nullptr)
            l1 = l1->next;
    }

    if (carry > 0)
    {
        current->next = new LLNode(carry);
    }

    LLNode *result = dummy->next; // Skip the dummy node
    delete dummy;                 // Delete the dummy node to avoid memory leak
    return result;
}