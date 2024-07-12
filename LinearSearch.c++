#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int key;
    int n;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key that you want to be search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Number is found at: " << i + 1;
            count++;
            break;
        }
    }
        if (count == 0)
        {
            cout << "Number is absent.";
        }
    return 0;
}