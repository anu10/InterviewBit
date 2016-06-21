int Solution::maximumGap(const vector<int> &A) {
    vector<int> index;
    for(int i = 0;i < A.size();i++){
        index[A[i]] = i;
    }
    
    sort(A.begin(),A.end());
    int ans = 0;
    for(int i = 0;i < A.size()-1;i++){
        if(index[A[i+1]] - index[A[i]] > ans){
            ans = index[A[i+1]] - index[A[i]];
        }
    }
    
    return ans;
}

