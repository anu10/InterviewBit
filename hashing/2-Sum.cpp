int find(const vector<int> &a, int x,int n){
    int i=0;
    for( i = 0;i <n;i++){
        if(a[i]==x)
            break;
    }
    return i+1;
}
vector<int> Solution::twoSum(const vector<int> &a, int target) {
    int n = a.size();
    unordered_set<int> m;
    vector<int> r;
    for(int i = 0;i <n;i++){
        if(m.find(target-a[i])==m.end()){
            m.insert(a[i]);
        }else{
            
            int ind = find(a,target-a[i],n);
            if(ind < i+1){
                r.push_back(ind);
                r.push_back(i+1);
            }else{
                r.push_back(i+1);
                r.push_back(ind);
            }
            break;
        }
    }
    
    return r;
}

