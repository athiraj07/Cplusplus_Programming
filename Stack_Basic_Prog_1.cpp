#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // Pushing elements onto the stack
    st.push(1);
    st.push(2);
    st.push(3);

    // Retreiving the elements from the stack and print
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
