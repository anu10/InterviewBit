int Solution::bulbs(vector<int> &a) {
    int n = a.size();
    int ans = 0,state  = 0;
    for(int i = 0;i < n;i++){
        if(a[i] == state){
            ans++;
            state = 1-state;
        }
    }
    
    return ans;
}

