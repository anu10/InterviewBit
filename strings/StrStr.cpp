int Solution::strStr(const string &haystack, const string &needle) {
    if(haystack == "" && needle == "")
        return -1;
    if(needle == "")
        return -1;
    int n = haystack.length();
    int m = needle.length();
    
    for(int i =0; i < n;i++){
        if(i+m > n){
            return -1;
        }
        int x = i;
        for(int j =0;j < m;j++){
            if(needle[j] == haystack[x]){
                if(j==m-1)
                    return i;
                x++;
            }else{
                break;
            }
        }
       
    }
    
    return -1;
}

