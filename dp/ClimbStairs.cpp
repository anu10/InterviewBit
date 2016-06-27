int Solution::climbStairs(int n) {
    vector<int> res;
    res.resize(n,0);
    if(n <= 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    res[0] = 1;
    res[1] = 2;
    if(res[n-1]!=0)
        return res[n-1];
    else{
        for(int i = 2;i < n;i++)
            res[i] = res[i-1]+ res[i-2];
    }
    
    return res[n-1];
}

