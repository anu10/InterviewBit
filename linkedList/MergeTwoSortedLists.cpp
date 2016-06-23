ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *C = NULL;
    if(A== NULL)
        return B;
    else if(B == NULL)
        return A;
        
    if(A->val <= B->val){
        C = A;
        C->next = mergeTwoLists(A->next,B);
    }else{
        C = B;
        C->next = mergeTwoLists(A,B->next);
    }
    
    
    return C;
    
}
