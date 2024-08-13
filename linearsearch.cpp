#include <bits/stdc++.h>
using namespace std;

void search(int arr[], int key, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Number is present at " << i + 1;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Number is absent";
    }
}
int main()
{
    int key;
    int n;
    cout << "Enter number range: ";
    cin >> n;
    int arr[n];
    cout << "Enter Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number for search: ";
    cin >> key;
    search(arr, key, n);

    return 0;
}