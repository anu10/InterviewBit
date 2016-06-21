int Solution::numSetBits(unsigned int A) {
    int count = 0;
    while(A){
        int r = A%2;
        if(r == 1)
            count++;
        A = A/2;
    }
    
    return count;
}
