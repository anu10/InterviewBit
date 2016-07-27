int pos(vector<int> &A, int k, int start, int end){
    int n = A.size();
    int mid = (start+end)/2;
    
    if(A[mid] == k){
        return mid;
    }
    if(A[mid] < k ){
        return end>mid? pos(A,k,mid+1,end):(end+1);
    }else{
        return mid>start? pos(A,k,start,mid-1):start;
    }
    
}
int Solution::searchInsert(vector<int> &A, int k) {
    int n = A.size();
    if(n==0)
        return 0;
    return pos(A,k,0,n-1);
}



