LLNode *reverseLinkedList(LLNode *head)
{
    LLNode *prev = nullptr;
    LLNode *current = head;
    while (current != nullptr)
    {
        LLNode *nextTemp = current->next;
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    return prev;
}