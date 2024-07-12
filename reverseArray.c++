#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {45, 10, 32, 23, 56, 20};
    int brr[5] = {5, 10, 15, 20, 25};

    reverse(arr, 6);
    reverse(brr, 5);

    printArr(arr, 6);
    printArr(brr, 5);
}