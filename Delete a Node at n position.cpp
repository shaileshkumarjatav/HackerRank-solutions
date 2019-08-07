 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
  
    SinglyLinkedListNode* d = head;
     if (position == 0) 
    { 
        head = d->next;   
        free(d);              
        return head; 
    } 
for(int i=0;i<position-1;i++)
    d=d->next;

SinglyLinkedListNode *next = d->next->next; 

    free(d->next);
  
    d->next = next;
return head;
}