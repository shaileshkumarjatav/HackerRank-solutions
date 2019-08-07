SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

 // Initialize current, previous and 
        // next pointers 
        SinglyLinkedListNode* current = head; 
        SinglyLinkedListNode *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            // Store next 
            next = current->next; 
  
            current->next = prev; 
  
            prev = current; 
            current = next; 
        } 
        head = prev; 
        return head;
}