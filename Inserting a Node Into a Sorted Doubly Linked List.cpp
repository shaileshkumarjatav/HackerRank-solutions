DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

DoublyLinkedListNode* current; 
  DoublyLinkedListNode* newNode=new DoublyLinkedListNode(data);
 
    if (head == NULL) 
        head = newNode; 
  
  
    else if ((head)->data >= newNode->data) { 
        newNode->next = head; 
        newNode->next->prev = newNode; 
        head = newNode; 
    } 
  
    else { 
        current = head; 

        while (current->next != NULL &&  
               current->next->data < newNode->data) 
            current = current->next; 
  
        newNode->next = current->next; 
   
        if (current->next != NULL) 
            newNode->next->prev = newNode; 
  
        current->next = newNode; 
        newNode->prev = current; 
    } 
    return head;
}