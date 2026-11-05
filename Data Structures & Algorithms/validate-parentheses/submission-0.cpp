//use a stack. push and pop is important. stack is last in first out. push whats in s, and when it is closed, check if its the same order
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s) {
            if (c == '(' || c == '{' || c == '[') {   //if opening bracket push it onto stack from s
                st.push(c);
            }
            else {
                // No opening bracket to match
                if (st.empty()) {
                    return false;
                }
                // if first closing doesnt match the top of the stack which shouldbe its opening then its false. do it for all 3 symbols.
                if (c == ')' && st.top() != '(' ||
                    c == '}' && st.top() != '{' ||
                    c == ']' && st.top() != '[') {
                    return false;
                }
                // Remove matched opening bracket to move to the next opening bracket in stack.
                st.pop();
            }
        }

        // All brackets must be matched
        return st.empty();
    }
};