#include <iostream>
#include <string>

class MyQueue {
   public:
    std::stack<int> external_stack, internal_stack;
    void push(int x) {
        external_stack.push(x);
    }
    int pop() {
        int curr = peek();
        internal_stack.pop();
        return curr;
    }
    int peek() {
        if (internal_stack.empty()) {
            while (external_stack.size()) {
                internal_stack.push(external_stack.top());
                external_stack.pop();
            }
        }
        return internal_stack.top();
    }
    bool empty() {
        return external_stack.empty() && internal_stack.empty();
    }
};

int main() {
    return 0;
}
