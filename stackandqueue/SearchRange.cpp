int findLeftMost(const vector<int> &A, int n, int target) {
        int start = 0, end = n-1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(target<A[mid])
                end = mid-1;
            else if(target>A[mid])
                start = mid+1;
            else
                end = mid-1;
        }
        if(start>=0 && start<n && A[start]==target) return start;
        return -1;
    }
    
    int findRightMost(const vector<int> &A, int n, int target) {
        int start = 0, end = n-1;
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(target<A[mid])
                end = mid-1;
            else if(target>A[mid])
                start = mid+1;
            else
                start = mid+1;
        }
        if(end>=0 && end<n && A[end]==target) return end;
        return -1;
    }
vector<int> Solution::searchRange(const vector<int> &A, int target) {
   vector<int> range;
   int n = A.size();
        range.push_back(findLeftMost(A, n, target));
        range.push_back(findRightMost(A, n, target));
        return range;
}



