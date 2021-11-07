Output Status:

Compiler Message
Success


/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    DoublyLinkedListNode *prev = NULL;
    DoublyLinkedListNode *curr = llist;
    
    if(llist == NULL){
        return NULL;
    }
    if(llist->next == NULL){
        return llist;
    }
    
    while (curr!=NULL) {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}
