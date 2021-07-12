/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    //null case handle
    if (head == NULL) return NULL;
    //
    struct ListNode* prev = NULL;
    
    while (head) {
        struct ListNode* currentNode = head;
        head = head->next;
        currentNode->next = prev;
        prev = currentNode;
    }
    return prev;
}
