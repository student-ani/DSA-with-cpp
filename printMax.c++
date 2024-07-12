#include <iostream>
using namespace std;
int main()
{
    int temp;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    temp = arr[0];              // temp me ham first value pass kar de rahe hai fir use sabhi element se compare karayenge aur update karenge.
    for (int i = 1; i < n; i++) // yadi arr[0] ko compare karate to value update nahi kar pate.
    {
        if (temp < arr[i])
        { // for minimum=if(temp>arr[i])
            temp = arr[i];
        }
    }
    cout << "Max Element is: " << temp << endl;
    for (int i = 1; i < n; i++)
    {
        if (temp > arr[i])
        { // for minimum=if(temp>arr[i])
            temp = arr[i];
        }
    }
    cout << "Min Element is: " << temp;
    return 0;
}