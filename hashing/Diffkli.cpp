int Solution::diffPossible(const vector<int> &A, int B) {
   int n = A.size();
   for(int i = 0; i <n;i++){
       for(int j = i+1;j < n;j++){
           if(abs(A[i]-A[j]) == B){
               return 1;
           }
       }
   }
   
   return 0;
}

