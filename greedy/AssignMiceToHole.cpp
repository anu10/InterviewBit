int Solution::mice(vector<int> &A, vector<int> &B) {
    int n = A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    int res = 0;
    for(int i = 0; i <n;i++){
        res = max(res, abs(A[i]-B[i]));
    }
    
    return res;
}

