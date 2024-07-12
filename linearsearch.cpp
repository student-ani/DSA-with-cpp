#include <iostream>
using namespace std;
int main()
{
    int i, a[50], search;
    int k=0, r;
    cout<<"Enter range: ";
    cin>>r;
    cout << "Enter "<<r <<" numbers: ";
    for (i = 0; i < r; i++)
    {
        cin >> a[i];
    } 
    cout << "Enter a number that you want to search: " << endl;
    cin >> search;
    for (i = 0; i < r; i++)
    {
        if (a[i] == search)
        {
            cout << "Number is found at " << i + 1;
            k++;
            break;
        }
    }    
        if(k==0)
        {
            cout<<"Number is not found";
        }
    return 0;
}