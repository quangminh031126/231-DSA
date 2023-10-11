template <class T>
T SLinkedList<T>::removeAt(int index)
{
    /* Remove element at index and return removed value */
    if (index < 0 || index >= count) {
        // Handle error: index out of bounds
        return T();
    }
    
    Node* current = head;
    T removedValue;
    
    if (index == 0) {
        // Remove head
        head = head->next;
        removedValue = current->data;
        delete current;
        if (count == 1) {
            // If the list becomes empty, update tail
            tail = NULL;
        }
    } else {
        // Remove at given index
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        Node* removedNode = current->next;
        removedValue = removedNode->data;
        current->next = removedNode->next;
        delete removedNode;
        
        if (index == count - 1) {
            // If removing the last node, update tail
            tail = current;
        }
    }
    
    count--;
    
    return removedValue;
}

template <class T>
bool SLinkedList<T>::removeItem(const T& item)
{
    /* Remove the first apperance of item in list and return true, otherwise return false */
    int index = indexOf(item);
    if (index == -1) {
        // Item not found
        return false;
    }
    
    removeAt(index);
    
    return true;
}

template<class T>
void SLinkedList<T>::clear(){
    /* Remove all elements in list */
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = tail = NULL;
    count = 0;
}

