int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size();
    if(n < 3)
        return n;
    int anchor = 1;
    for(int i = 2; i < n;i++){
        if(A[anchor]!=A[i] || A[anchor]!=A[anchor-1]) // allow twice duplicates
            A[++anchor] = A[i]; // copy the node into new place
    }
    
    return anchor+1;
}

