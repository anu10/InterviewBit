void Solution::merge(vector<int> &A, vector<int> &B) {
    vector<int> c;
    int n = A.size();
    int m = B.size();
    
    int i =0,j = 0;
    while(i < n && j < m){
        if(A[i]<=B[j]){
            c.push_back(A[i]);
            i++;
        }else{
            c.push_back(B[j]);
            j++;
        }
    }
    
    while(i < n){
        c.push_back(A[i]);
        i++;
    }
    
    while(j < m){
        c.push_back(B[j]);
        j++;
    }
    
    A.clear();
    int p = c.size();
    for(int i = 0;i < p;i++){
        A.push_back(c[i]);
    }
}

