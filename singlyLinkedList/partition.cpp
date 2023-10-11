void LinkedList::partition(int k)
{
    if (head == NULL)
    {
        return;
    }
    Node *i_head = NULL;
    Node *i_tail = NULL;
    Node *ii_head = NULL;
    Node *ii_tail = NULL;
    Node *iii_head = NULL;
    Node *iii_tail = NULL;
    Node *current = head;
    while (current != NULL)
    {
        if (current->value < k)
        {
            if (i_head == NULL)
            {
                i_head = current;
                i_tail = current;
            }
            else
            {
                i_tail->next = current;
                i_tail = current;
            }
        }
        else if (current->value == k)
        {
            if (ii_head == NULL)
            {
                ii_head = current;
                ii_tail = current;
            }
            else
            {
                ii_tail->next = current;
                ii_tail = current;
            }
        }
        else
        {
            if (iii_head == NULL)
            {
                iii_head = current;
                iii_tail = current;
            }
            else
            {
                iii_tail->next = current;
                iii_tail = current;
            }
        }
        current = current->next;
    }
    if (i_head == NULL)
    {
        head = ii_head;
    }
    else
    {
        head = i_head;
        i_tail->next = ii_head;
    }
    if (ii_tail != NULL)
    {
        ii_tail->next = iii_head;
    }
    if (iii_tail != NULL)
    {
        tail = iii_tail;
    }
    else if (ii_tail != NULL)
    {
        tail = ii_tail;
    }
    else
    {
        tail = i_tail;
    }
}