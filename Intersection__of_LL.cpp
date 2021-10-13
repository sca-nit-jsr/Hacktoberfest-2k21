Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *res = NULL;
    Node *t = NULL;
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data == head2->data)
            {
                if(res == NULL){
                    res = head1;
                    t = res;
                }
                else{
                    t->next = head1;
                    t = t->next;
                }
            
                head2  = head2->next;
                head1 = head1->next;
            }
        else if(head1->data < head2->data)
                head1 =head1->next;
        else
                head2 = head2->next;
    }
    return res;
}
