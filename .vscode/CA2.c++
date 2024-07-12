#include <iostream>
#include <climits>
using namespace std;

#define MAX_SIZE 100

class Queue
{
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue()
    {
        front = -1;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Error: Queue is full" << endl;
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = x;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Error: Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void printLargestSmallest()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        int largest = INT_MIN, smallest = INT_MAX;
        for (int i = front; i != rear; i = (i + 1) % MAX_SIZE)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }
        if (arr[rear] > largest)
        {
            largest = arr[rear];
        }
        if (arr[rear] < smallest)
        {
            smallest = arr[rear];
        }
        cout << "Largest element: " << largest << endl;
        cout << "Smallest element: " << smallest << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(8);
    q.enqueue(1);
    q.enqueue(10);

    cout << "Front element: " << q.peek() << endl;
    q.dequeue();

    cout << "Front element after dequeue: " << q.peek() << endl;

    q.printLargestSmallest();

    return 0;
}