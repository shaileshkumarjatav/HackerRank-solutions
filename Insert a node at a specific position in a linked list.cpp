SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {

SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
SinglyLinkedListNode* prev_node = head;

for(int i=1;i<position;i++)
prev_node = prev_node->next;

newNode->next = prev_node->next;
prev_node->next = newNode;

return head;
}