/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    //null case
    if (head == NULL) return NULL;
    //two point, cur would go to find the tail
    //and pre keep n step behind cur
    //so once cur find tail, pre would know which need to remove
    struct ListNode *pre = head, *cur = head;
    for (int i = 0; i < n; i++)
        cur = cur->next;
    //cur = null means n = list size
    if (cur == NULL) return head->next;
    while (cur->next)
    {
        cur = cur->next;
        pre = pre->next;
    }
    pre->next = pre->next->next;
    
    return head;
}
