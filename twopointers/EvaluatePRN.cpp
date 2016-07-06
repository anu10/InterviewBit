int Solution::evalRPN(vector<string> &A) {
    stack<int> st;
    int n = A.size();
    for(int i = 0; i < n;i++){
        if(A[i] == "+" || A[i] == "-" || A[i] == "*" || A[i] == "/") {
            int v1=st.top();
            st.pop();
            int v2=st.top();
            st.pop();
            switch(A[i][0]) {
                case '+':
                        st.push(v2 + v1);
                        break;
                case '-':
                        st.push(v2 - v1);
                        break;
                case '*':
                        st.push(v2 * v1);
                        break;
                case '/':
                        st.push(v2 / v1);
                        break;
            }
        }else{
            st.push(atoi(A[i].c_str()));
        }
    }
    
    return st.top();
}

