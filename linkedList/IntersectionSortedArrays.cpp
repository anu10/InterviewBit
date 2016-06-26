vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> res;
    int n = A.size();
    int m = B.size();
    
    int i = 0,j = 0;
    while(i < n && j < m){
        if(A[i] < B[j])
            i++;
        if(B[j] < A[i])
            j++;
        if(A[i]==B[j]){
            res.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    return res;
    
}

