#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data) : data(data), next(nullptr) {}
};

class Stack
{
private:
    Node *top;

public:
    Stack() : top(nullptr) {}

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            exit(EXIT_FAILURE);
        }
        Node *temp = top;
        int data = temp->data;
        top = temp->next;
        delete temp;
        return data;
    }

    bool isEmpty()
    {
        return top == nullptr;
    }

    void printStack()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *current = top;
        cout << "Stack: ";
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack stack;

    stack.push(100);
    stack.push(200);
    stack.push(300);

    stack.printStack();

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    stack.printStack();

    return 0;
}
