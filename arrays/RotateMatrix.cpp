 void transpose(vector<vector<int> > &A) {

        for (int i = 0; i < A.size(); i++) {
            for (int j = i; j < A[0].size(); j++) {
                int x = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = x;
            }
        }
}

void Solution::rotate(vector<vector<int> > &A) {
    transpose(A);
    int n = A.size();
    for(int j = 0;j < n/2;j++){
        for(int i = 0;i < n;i++){
            int x = A[i][j];
            A[i][j] = A[i][n -1 -j]; 
            A[i][n-1-j] = x;
        }
    }
}

