#include <bits/stdc++.h>
using namespace std;
void patt_match(string& text, string& patt)
{
    int M = text.size();
    int N = patt.size();
    for (int i = 0; i < M - N; i++)
    {
        int j;
        for (j = 0; j < N; j++)
        {
            if (text[i + j] != patt[j])
            {
                break;
            }
        }
        if (j == N)
        {
            cout << "Pattern found at: " << i << endl;
        }
    }
}
int main()
{
    string text = "abcabdefabcdf";
    string patt = "abc";
    patt_match(text, patt);
    return 0;
}