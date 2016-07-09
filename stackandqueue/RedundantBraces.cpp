int Solution::braces(string A) {
    stack<int> st;
    int n = A.length();
    for(int i = 0;i < n;i++){
        if(A[i] != ')'){
            st.push(A[i]);
        }else{
            int count = 0;
            while(st.size() && st.top()!= '('){
                st.pop();
                count++;
            }
            st.pop();
            if(count ==0 || count == 1)
                return 1;
        }
    }
    
    return 0;
}

