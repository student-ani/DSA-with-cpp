#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int key;
    int count =0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number for Search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at place " << i + 1 << endl;
            count++;
            break;
        }
    }
        if (count == 0)
        {
            cout << "Element not found in the array" << endl;
        }
         return 0;
}