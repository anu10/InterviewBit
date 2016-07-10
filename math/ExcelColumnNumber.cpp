int Solution::titleToNumber(string A) {
    int n = A.length();
    int r = 0;
    for(int i = 0;i < n;i++){
        r = 26*r + A[i]-64;
    }
    return r;
    
}

