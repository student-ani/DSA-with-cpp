#include <iostream>
#include <stack>
#include <vector>

using namespace std;

bool isStack(const vector<int> &pushed, const vector<int> &popped)
{
    stack<int> st;
    int j = 0;
    for (int x : pushed)
    {
        st.push(x);
        while (!st.empty() && st.top() == popped[j])
        {
            st.pop();
            j++;
        }
    }
    return st.empty();
}

int main()
{
    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> popped1 = {4, 5, 3, 2, 1};
    vector<int> popped2 = {4, 3, 5, 1, 2};

    if (isStack(pushed, popped1))
        cout << "pop1 is a valid stack" << endl;
    else
        cout << "pop1 is invalid stack" << endl;

    if (isStack(pushed, popped2))
        cout << "pop2 is a valid stack" << endl;
    else
        cout << "pop2 is invalid stack" << endl;

    return 0;
}
