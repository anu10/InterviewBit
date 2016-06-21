int Solution::maxSubArray(const vector<int> &A) {
    int curr_max = A[0];
    int max_final = A[0];
    int n = A.size();
    for(int i = 1;i <n;i++){
        curr_max = max(curr_max+A[i],A[i]);
        max_final = max(max_final,curr_max);
    }
    
    return max_final;
}
