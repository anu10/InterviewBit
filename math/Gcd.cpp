int Solution::gcd(int A, int B) {
    if (A < B) {
    return gcd(B, A);
    } else if (B == 0) {
    // corner case
    return A;
    } else {
    return gcd(A % B, B);
    }
    
}

