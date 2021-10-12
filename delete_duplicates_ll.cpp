SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* t1 = llist;
    SinglyLinkedListNode* t2;
    while(t1->next != NULL)
    {
        if(t1->data == t1->next->data)
        {
            t2 = t1->next->next;
            free(t1->next);
            t1->next = t2;
        }
        else
        {
            t1 = t1->next;
        }
    }
    return llist;
}
