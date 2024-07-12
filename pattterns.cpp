#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a limit: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;

    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << c++ << " ";
        }
        cout << endl;
        // c++;
    }

    cout << endl;

    char let = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << let << " ";
        }
        cout << endl;
        let++;
    }

    cout << endl;

    string star = "*";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << star << " ";
        }
        cout << endl;
    }

    cout << endl;

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num << " ";
            num += 2;
        }
        cout << endl;
    }

    cout << endl;

    int numb = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << numb << " ";
            numb += 2;
        }
        cout << endl;
    }

    cout << endl;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (i * j) << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << j << " " << i << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        for (int j = 1; j <= i; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        for (int j = 1; j <= n; j++)
        {
            cout << x << " ";
            x += n;
        }
        cout << endl;
    }

    return 0;
}