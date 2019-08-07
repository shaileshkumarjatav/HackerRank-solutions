SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode* current = head;  
  
    SinglyLinkedListNode* next_next;  
 
    if (current == NULL)  
    return head;  
  

    while (current->next != NULL)  
    {  

    if (current->data == current->next->data)  
    {  
            
        next_next = current->next->next;  
        free(current->next);  
        current->next = next_next;  
    }  
    else 
    {  
        current = current->next;  
    }  
    }
return head;
}