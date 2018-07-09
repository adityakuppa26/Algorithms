class StackQueue{
private:   
    stack<int> s1;
    stack<int> s2;
public:
    void push(int);
    int pop();
}; 


void StackQueue :: push(int x)
 {
        s1.push(x);
 }

int StackQueue :: pop()
{
        if(s2.empty())
        {
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        }  
        if(s2.empty()){return -1;}
        int top= s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return top;
}
