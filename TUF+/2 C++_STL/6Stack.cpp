#include <bits/stdc++.h>
using namespace std;

void ExplainStack()
{
    stack<int> stack1;
    stack1.push(7);
    stack1.push(8);
    stack1.push(9);
    stack1.push(5);
    stack1.push(3);
    stack1.push(0);

    // stack<string> stack2;
    // stack2.push("K");
    // stack2.push("B");

    // cout << stack1.top(); // gives tge top most elements

    // accessing all the elements of a stack

    while (stack1.empty() == false)
    {
        cout << stack1.top() << " ";
        stack1.pop();
    }
}

int main()
{

    ExplainStack();

    return 0;
}