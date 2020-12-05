class CustomStack {
public:
    vector<int> stack;
    int limit;
    CustomStack(int maxSize) {
        limit=maxSize;
    }
    
    void push(int x) {
        if(stack.size()==limit)
            return;
        stack.push_back(x);
        
    }
    
    int pop() {
        if(stack.size()==0)
            return -1;
        int val=stack.back();
        stack.pop_back();
        return val;
    }
    
    void increment(int k, int val) {
        if(k>stack.size())
            k=stack.size();
        for(int i=0;i<k;i++)
            stack[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */