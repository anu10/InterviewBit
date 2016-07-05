class Solution {
    Stack<Integer> s = new Stack<Integer>();
    Stack<Integer> sMin = new Stack<Integer>();

    public void push(int x) {
        s.push(x);
        if(sMin.isEmpty() || x <= sMin.peek())
            sMin.push(x);
        else
            sMin.push(sMin.peek());
        
    }

    public void pop() {
       if(!s.isEmpty() && !sMin.isEmpty()){
            s.pop();
            sMin.pop();
       }
    }

    public int top() {
        if(s.isEmpty())
            return -1;
        return s.peek();
        
    }

    public int getMin() {
        if(sMin.isEmpty())
            return -1;
        return sMin.peek();
        
    }
}

