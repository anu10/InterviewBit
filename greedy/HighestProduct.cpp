int Solution::maxp3(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
    int c1 = A[n-1];
    int c2 = A[n-2];
    int c3 = A[n-3];
    int res1 = c1*c2*c3;
    c2 = A[0];
    c3 = A[1];
        
    int res2 = c1*c2*c3;
    
    if(res1 > res2)
        return res1;
    else
        return res2;
}

