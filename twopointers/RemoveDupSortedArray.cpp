int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size();
    if(n==1)
        return 1;
    int i = 0;
    for(int j = 1;j <n;j++){
        if(A[i]!=A[j]){
            A[++i] = A[j];
        }
    }
    
    return i+1;
}

