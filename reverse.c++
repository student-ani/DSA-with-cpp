#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    /*Reversing the array*/
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    /*Sum of all the elements*/
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum is: " << sum << " ";
    cout << endl;

    /*Number Occurance*/
    int z;
    cin >> z;                   // 2
    int count = 0;              //
    for (int i = 0; i < n; i++) //  1 2 2 3 2
    {                           // 0 1 2 3 4
        if (arr[i] == z)
        {
            count++; // 3
        }
    }
    cout << "The count is: " << count;
    cout << endl;

    /*Finding the maximum element*/
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The max Element is: " << max;
    cout << endl;

    /*Finding the minimum element*/
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The min Element is: " << min;
    cout << endl;
    return 0;
}