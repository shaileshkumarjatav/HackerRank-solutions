DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
 DoublyLinkedListNode *temp = NULL;  
   DoublyLinkedListNode *current = head;  
   
    while (current != NULL)  
    {  
        temp = current->prev;  
        current->prev = current->next;  
        current->next = temp;              
        current = current->prev;  
    }  

    if(temp != NULL )  
        head = temp->prev; 
return head;
}