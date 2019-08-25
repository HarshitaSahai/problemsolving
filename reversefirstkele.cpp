queue<ll> modifyQueue(queue<ll> q, int k)
{
    stack<int> s;
    int i=k;
    //pop first k elements in to a stack
    while(i--){
        s.push(q.front());
        q.pop();
    }
    //push the stack elements to the back of the queue in reverse order
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    i=q.size()-k;
    //pop the first n-k elements to the back
    while(i--){
        q.push(q.front());
        q.pop();
    }
    return q;
}
