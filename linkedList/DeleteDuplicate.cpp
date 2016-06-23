
ListNode* Solution::deleteDuplicates(ListNode* head) {
    ListNode *curr = head;
    if(head == NULL)
        return head;
    ListNode *temp = NULL;
    while(curr->next!=NULL){
        if(curr->val == curr->next->val){
            temp = curr->next->next;
            free(curr->next);
            curr->next = temp;
        }else{
            curr = curr->next;
        }
    }
    
    return head;
}

