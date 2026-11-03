class MyQueue {
public:
    stack<int>st;
    MyQueue() {
        
    }
    
    
    void push(int x) {
        st.push(x);
    }
    //in this case we go till the base case and then remove that element and again push the removed element into the stack.

    int pop() {
         int x = st.top();
    st.pop();

    if (st.empty()) {
        return x;
    }

    int ans = pop();

    st.push(x);

    return ans;
    }
    

//in this we first take all the element out of the satck and return the first value (base case) and then again push the element into the stack. 
    int peek() {
         int x = st.top();

    if (st.size() == 1) {
        return x;
    }

    st.pop();

    int ans = peek();

    st.push(x);

    return ans;

    }
    

    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */