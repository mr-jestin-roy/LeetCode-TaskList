class MinStack {
public:
    /** USING TWO VECTORS */
    vector<int> a;
    vector<int> min;

    MinStack() {
        min.push_back(INT_MAX);        
    }
    
    void push(int val) {
        a.push_back(val);
        if(val < min.back()){
            min.push_back(val);
        }
        else{
            min.push_back(min.back());
        }
    }
    
    void pop() {
        a.pop_back();
        min.pop_back();
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {
        return min.back();
    }
};

class MinStack {
public:
    /** USING ONLY ONE VECTOR */
    vector<int> a;
    int min;

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
        int t= a.back(); a.pop_back();
        if(t==min){
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
