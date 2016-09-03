int Solution::searchMatrix(vector<vector<int> > &A, int x) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n = A.size();
    int m = A[0].size();
    
    if (n == 0 || m == 0) {
        return 0;
    }
    
    
    int low = 0;
    int high = n*m-1;
    
    while(low <= high){
        int mid = (low + high)/2;
        int i = mid/m;
        int j = mid%m;
        
        if(A[i][j]==x){
            return 1;
        }else if(A[i][j] < x){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    return 0;
    
}

