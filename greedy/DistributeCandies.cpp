int Solution::candy(vector<int> &a) {
    vector<int> candies_forward;
    vector<int> candies_back;
    int n = a.size();
    int ans = 0;
    candies_forward.resize(n,0);
    candies_back.resize(n,0);
    
    candies_forward[0] = 1;
  
    for(int i = 1;i<n;i++){
       if(a[i-1] < a[i]){
           candies_forward[i] = candies_forward[i-1]+1;
       }else
           candies_forward[i] = 1;
    }
    
    candies_back[n-1] = 1;
    for(int i = n-2;i>=0;i--){
       if(a[i+1] < a[i]){
           candies_back[i] = candies_back[i+1]+1;
       }else
           candies_back[i] = 1;
    }
    
    for(int i = 0;i <n;i++){
        ans += max(candies_back[i],candies_forward[i]);
    }
    
    return ans;
}

