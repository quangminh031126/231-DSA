template <class T>
void SLinkedList<T>::add(const T &e)
{
    /* Insert an element into the end of the list. */
    Node *newNode = new Node(e, nullptr);
    if (count == 0)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    count++;
}

template <class T>
void SLinkedList<T>::add(int index, const T &e)
{
    /* Insert an element into the list at given index. */
    if (index < 0 || index > count)
    {
        // Handle error: index out of bounds
        return;
    }

    Node *newNode = new Node(e, NULL);

    if (index == 0)
    {
        // Insert at head
        newNode->next = head;
        head = newNode;
        if (count == 0)
        {
            // If the list was empty, set tail to the new node
            tail = newNode;
        }
    }
    else
    {
        // Insert at given index
        Node *prevNode = head;
        for (int i = 0; i < index - 1; i++)
        {
            prevNode = prevNode->next;
        }
        newNode->next = prevNode->next;
        prevNode->next = newNode;

        if (index == count)
        {
            // If inserting at the end of the list, update tail
            tail = newNode;
        }
    }

    count++;
}

template <class T>
int SLinkedList<T>::size()
{
    /* Return the length (size) of list */
    return count;
}
