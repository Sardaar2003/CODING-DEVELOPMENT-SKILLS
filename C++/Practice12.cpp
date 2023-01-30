#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(12);
    st.push(14);
    cout << st.top() << endl;
    return 0;
}