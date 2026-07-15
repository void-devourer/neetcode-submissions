class MinStack {
private:
    long min;
    std::stack<long> stac;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(stac.empty()){
            stac.push(0);
            min = val;
        }
        else{
            stac.push(val-min);
            if(val<min) min = val;
        }
    }
    
    void pop() {
        if(stac.empty()) return;
        long pop = stac.top();
        stac.pop();
        if(pop<0) min = min - pop;
    }
    
    int top() {
        long top = stac.top();
        return (top>0) ?  (top + min) : (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
