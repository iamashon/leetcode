/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    //node needs to be removed
    //once node disappear, node's next would be node
    node->val = node->next->val;
    node->next = node->next->next;
    return;
}
