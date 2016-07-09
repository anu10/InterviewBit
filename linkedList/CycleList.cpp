/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* head) {
    if(head == NULL)
        return NULL;
    
    ListNode *slow = head;
    ListNode *fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            break;
    }
    
    // the list has no cylce
    if(fast == NULL || fast->next == NULL)
        return NULL;
    
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    
    return fast;
    
}

