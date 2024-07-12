#include <bits/stdc++.h>
using namespace std;

int update(int arr[], int n)
{
    arr[0] = 150;
    cout << "Printing the Update Function" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going to main Function" << endl;
}

int main()
{
    int arr[5] = {20, 15, 42, 21, 23};
    update(arr, 5);
    cout << "Printing the main Function" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Completed....!" << endl;
    return 0;
}