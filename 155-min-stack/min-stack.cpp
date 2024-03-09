class MinStack {
public:

    vector<pair<int,int>> v;

    MinStack() {
        
    }
    
    void push(int val) {
        if(v.empty()){
            pair<int,int> p = make_pair(val,val);
            v.push_back(p);
        }
        else{
            int mini = min(v.back().second,val);
            pair<int,int> p = make_pair(val,mini);
            v.push_back(p);
        }
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        return v.back().first;
    }
    
    int getMin() {
        return v.back().second;
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