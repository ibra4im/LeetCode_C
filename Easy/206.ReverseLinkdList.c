/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode *Newhead = NULL;
    struct ListNode *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        temp-> = Newhead ;
        Newhead = temp ;
    }
    return Newhead;
}
