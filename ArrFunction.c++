#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = val;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "printing Done" << endl;
}

int main()
{
    int n = 10;
    int arr[10];
    int val = 1;
    printArr(arr, n, val);
}