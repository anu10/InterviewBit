vector<int> Solution::maxset(vector<int> &A) {
 
   int len = A.size();
   long long max_sum = 0;
   long long cur_sum = 0;
   int startmax = -1;
   int endmax = -1;
   int start = 0;
   int end = 0;
 
   while(end < len) {
      if(A[end]>=0)
      {
          cur_sum += (long long)A[end];
          if(cur_sum > max_sum) {
          max_sum = cur_sum;
          startmax = start;
          endmax = end + 1;
          }
          else if(cur_sum == max_sum)
          {
            if(end + 1 - start > endmax - startmax) {
              startmax = start;
              endmax = end + 1;
              }
          }
      }else
      {
         start = end + 1;
         cur_sum = 0;
      }
 
      end++;
   }
 
   vector<int> ans;
   ans.clear();
 
   if(startmax == -1 || endmax == -1)
       return ans;
 
   for(int i = startmax; i < endmax; ++i)
         ans.push_back(A[i]);
   return ans;
}
