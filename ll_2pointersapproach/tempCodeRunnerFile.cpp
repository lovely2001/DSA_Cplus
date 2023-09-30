//when k = length then ptr2 will be equal  to null in this case we have to remove head
    if(ptr2 == NULL){
        Node* temp=head;
        head = head->next;
        free(temp);
        return;
    }
