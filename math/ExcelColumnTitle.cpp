string Solution::convertToTitle(int A) {
    string res = "";
    while(A){
        res = (char)((A-1)%26 + 65) + res;
        A = (A-1)/26;
    }
    
    return res;
}

