#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[10] = {10, 2, -5, 45, 20, 15, 63, 97, 2, 52};

    cout << "Enter the key that you want to be search: ";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "The key is present in the array"<<endl;
    }
    else
    {
        cout << "The key is not present in the array"<<endl;
    }
    return 0;
}