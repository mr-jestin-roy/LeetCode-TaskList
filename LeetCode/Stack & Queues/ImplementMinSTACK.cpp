class MinStack {
    vector<int> a;
    int min;
public:
    MinStack() {
        min = INT_MAX;
    }
    
    void push(int val) {
        if(val <= min){
            a.push_back(min);
            min = val;
        }
        a.push_back(val);
    }
    
    void pop() {
        int t=a.back(); a.pop_back();
        if(t == min){       //updating min if a.back()==min
            min = a.back();
            a.pop_back();
        }
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */