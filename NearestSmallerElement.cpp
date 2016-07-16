vector<int> Solution::prevSmaller(vector<int> &arr) {
    int n = arr.size();
    vector<int> res;
    if(arr.size() == 0) 
        return res;
    
    stack<int> st;
    for(int i = 0; i<arr.size(); i++){
        int cur = arr[i];

        while(!st.empty() && st.top()>=cur) 
            st.pop();
        if(st.empty()) 
            res.push_back(-1);
        else 
            res.push_back(st.top());
        st.push(cur);
    }
    return res;
    
}

