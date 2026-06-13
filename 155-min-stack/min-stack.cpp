class MinStack {
public:
    stack<int> m;
    stack<int> s;

    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(m.empty() || value <= m.top()){
            m.push(value);
        }
    }
    
    void pop() {
        if(m.top() == s.top()){
            m.pop();
        }
        if(!s.empty()){
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */