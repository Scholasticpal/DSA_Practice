// // Circular Doubly Linked List

// // Insertion at head
// {
// Node *temp = new Node(x);
// if(head == NULL){
//     temp ->next = temp;
//     temp ->prev = temp;
//     return temp;
// }
// temp->prev = head->prev;
// temp->next = head;
// head->prev->next; = temp;
// head->prev = temp;
// return temp;
// }

// //Insertion at end
// {
//     // "" Same as above, just 
//     // return head instead of return temp;
//     return head;
// }