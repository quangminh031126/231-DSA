LLNode *rotateLinkedList(LLNode *head, int k)
{
    if (head == nullptr || head->next == nullptr || k == 0)
    {
        return head;
    }

    // Determine the length of the list
    LLNode *current = head;
    int length = 1;
    while (current->next != nullptr)
    {
        current = current->next;
        length++;
    }

    // Connect the last node to the head to create a circular list
    current->next = head;

    // Find the new tail, which is (length - k % length - 1) nodes ahead of the head
    k %= length;
    for (int i = 0; i < length - k - 1; i++)
    {
        head = head->next;
    }

    // The new head is one node ahead of the new tail
    LLNode *newHead = head->next;

    // Break the circular list
    head->next = nullptr;

    return newHead;
}
