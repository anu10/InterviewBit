bool isPrime(int x){
    if(x == 1)
        return false;
    for(int i = 2;i <= sqrt(x);i++){
        if(x%i ==0){
            return false;
        }
    }
    
    return true;
}
vector<int> Solution::primesum(int A) {
    vector<int> res;
    for(int i = 2;i < A;i++){
        if(isPrime(i) && isPrime(A-i)){
            res.push_back(i);
            res.push_back(A-i);
            break;
        }
    }
    
    return res;
}

