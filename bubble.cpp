#include <iostream>
using namespace std;

void bubble_Sort(int a[])
{
    for (int j = 0; j < 5; j++)
    {
        for (int k = 0; k < 5 - j; k++)
        {
            if (a[k] > a[k + 1])
            {
                int c = a[k + 1];
                a[k + 1] = a[k];
                a[k] = c;
            }
        }
    }
    cout << "after sorting...";
    for (int j = 0; j < 6; j++)
    {
        cout << " " << a[j];
    }
}

int main()
{
    int a[20];
    cout << "Enter numbers: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    bubble_Sort(a);
    return 0;
}