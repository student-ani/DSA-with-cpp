#include<bits/stdc++.h>
using namespace std;
// ------------------Node Creation-----------------
class Node
{
    public:
    int data;
    Node* next/*(name of the pointer)*/;

    //Constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

int main()
{
    Node* node1 = new Node(10);
    cout<< node1 -> data <<endl;
    cout<< node1 -> next <<endl;

    return 0; 

}