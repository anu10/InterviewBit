int Solution::diffPossible(vector<int> &A, int k) {
   int n = A.size();
   if(n < 2)
        return 0;
   int i = 0,j = 1;
   
   while(j < n){
       if(A[j]-A[i] == k){
           return 1;
       }else if(A[j]-A[i] > k){
           while(i+1 < j && A[j]-A[i] > k){
               i++;
               if(A[j]-A[i] == k){
                   return 1;
               }
           }
           j++;
       }else{
           j++;
       }
       
   }
   
   return 0;
}

