template <class T>
T SLinkedList<T>::get(int index)
{
    /* Give the data of the element at given index in the list. */
    if (index < 0 || index >= count)
    {
        return T();
    }
    Node *curr = head;
    for (int i = 0; i < index; ++i)
    {
        curr = curr->next;
    }
    return curr->data;
}

template <class T>
void SLinkedList<T>::set(int index, const T &e)
{
    /* Assign new value for element at given index in the list */
    if (index < 0 || index >= count)
    {
        return;
    }
    Node *curr = head;
    for (int i = 0; i < index; ++i)
    {
        curr = curr->next;
    }
    curr->data = e;
}

template <class T>
bool SLinkedList<T>::empty()
{
    /* Check if the list is empty or not. */
    return count == 0;
}

template <class T>
int SLinkedList<T>::indexOf(const T &item)
{
    /* Return the first index wheter item appears in list, otherwise return -1 */
    Node *curr = head;
    for (int i = 0; i < count; ++i)
    {
        if (curr->data == item)
            return i;
        curr = curr->next;
    }
    return -1;
}

template <class T>
bool SLinkedList<T>::contains(const T &item)
{
    /* Check if item appears in the list */
    Node *curr = head;
    for (int i = 0; i < count; ++i)
    {
        if (curr->data == item)
            return true;
        curr = curr->next;
    }
    return false;
}