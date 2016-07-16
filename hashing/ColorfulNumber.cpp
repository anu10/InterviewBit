#include <iostream>
#include <set>
#include <vector>
#include <stdio.h>

int product(vector<int> arr,int i, int j){
    int res = 1;
    for(int x=i;x<=j;x++){
        res *= arr[x];
    }
    return res;
}

int colorful(int A) {
    vector<int> h;
    set<int> st;
    while(A){
        int r = A%10;
        h.push_back(r);
        A = A/10;
    }
    
    int n = h.size();
    if(A >= 0 && A <= 9)
        return 1;
        
    int res = 0;
    int num = 0;
    bool flag = true;
    
    for(int i = 0; i < n;i++){
        for(int j = i;j < n;j++){
            res = product(h,i,j);
            if (st.find(res) == st.end()){
                st.insert(res);
            }else{
                flag = false;
                break;
            }
            res = 0;
        }
        if(flag == false)
            break;
    }
    if(flag)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    while(1){
    	cin >> n;
	int p = colorful(n);
	cout << p << endl;
    }

    return true;
}
    
    
