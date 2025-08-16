
class MinStack {
    private:
     stack<long long> st;
     long long mini;
public:
    MinStack() {
          while (st.empty() == false) st.pop();
 mini= LLONG_MAX;
    } 
    
    void push(int val) {
        long long value = val;
        if(st.empty()) {
            mini=value;
            st.push(value);
        }
        else{
           if(value>mini) st.push(value);
           //when modified(val<mini) & then mini is top

           else{
            st.push(2*value - mini); // newVAlue is inserted 
            mini= value; //mini is top
           }
        }
    }
    
    void pop() {
       if(st.empty()) return;
       long long top= st.top();
       st.pop();
       //mini -->prev_mini
       if(top<mini){
        mini = 2*mini - top;
       }
    }
    
    int top() {
    if(st.empty()) return -1;
    long long top= st.top();
     if(mini <= top) return top;
     return mini;
    }
    
    int getMin() {
        return mini;
    }
};

//TC:O(1)
//SC:O(N) 


/*
class MinStack {
    private:
     stack<pair<int,int>> st;
public:
    MinStack() {

    }
    
    void push(int val) {
        if(st.empty()) st.push({val, val});
        else{
            st.push({val, min(val, st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
       return  st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
//{val, min}
//TC:O(1)
//SC:O(2N) -->storing two values


 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();

 */