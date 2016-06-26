int Solution::removeElement(vector<int> &A, int B) {
    int k = 0;
    for(int i = 0; i < A.size();i++){
        if(A[i]!=B){
            A[k++] = A[i];
        }
    }
    
    return k;
}

