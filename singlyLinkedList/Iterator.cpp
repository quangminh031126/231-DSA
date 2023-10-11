template <class T>
SLinkedList<T>::Iterator::Iterator(SLinkedList<T> *pList, bool begin)
{
    this->pList = pList;
    if (begin && pList)
    {
        current = pList->head;
        index = 0;
    }
    else
    {
        current = NULL;
        index = pList ? pList->size() : 0;
    }
}

template <class T>
typename SLinkedList<T>::Iterator &SLinkedList<T>::Iterator::operator=(const Iterator &iterator)
{
    this->current = iterator.current;
    this->index = iterator.index;
    this->pList = iterator.pList;
    return *this;
}

template <class T>
void SLinkedList<T>::Iterator::remove()
{
    if (current == NULL)
    {
        throw std::out_of_range("Segmentation fault!");
    }
    current = current->next;
    pList->removeAt(index);
}

template <class T>
void SLinkedList<T>::Iterator::set(const T &e)
{
    if (current == NULL)
    {
        throw std::out_of_range("Segmentation fault!");
    }
    current->data = e;
}

template <class T>
T &SLinkedList<T>::Iterator::operator*()
{
    if (current == NULL)
    {
        throw std::out_of_range("Segmentation fault!");
    }
    return current->data;
}

template <class T>
bool SLinkedList<T>::Iterator::operator!=(const Iterator &iterator)
{
    return this->current != iterator.current || this->index != iterator.index;
}

template <class T>
typename SLinkedList<T>::Iterator &SLinkedList<T>::Iterator::operator++()
{
    if (current != NULL)
    {
        current = current->next;
        index++;
    }
    return *this;
}

template <class T>
typename SLinkedList<T>::Iterator SLinkedList<T>::Iterator::operator++(int)
{
    Iterator iterator = *this;
    if (current != NULL)
    {
        ++*this;
    }
    return iterator;
}
