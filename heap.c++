#include <bits/stdc++.h>
using namespace std;

#define MAX 1000 // i is index of root, n is the size of the array

void heapify(int arr[], int n, int i)
{
    int parent = (i - 1) / 2;
    if (arr[parent] > 0)
    {
        if (arr[i] > parent)
        {
            swap(arr[i], arr[parent]);
            heapify(arr, n, parent);
        }
    }
}
void insertNode(int arr[], int &n, int key)
{
    n += 1;
    arr[n - 1] = key;
    heapify(arr, n, n - 1);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[MAX] = {15, 7, 9, 12, 3, 5, 1};
    int n = 7;
    int key = 19;
    insertNode(arr, n, key);
    printArr(arr, n);
    return 0;
}