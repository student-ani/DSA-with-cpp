/*Pattern Matching using Bruteforce Method.*/
#include <bits/stdc++.h>
using namespace std;

void find_Patt(string& text, string& pattern)
{
    int M = text.size();
    int N = pattern.size();
    for (int i = 0; i < M - N; i++)
    {
        int j;
        for (j = 0; j < N; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == N)
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}
int main()
{
    string text = "aabaacaadaabaaabaa";
    string pattern = "aabaa";
    find_Patt(text, pattern);
    return 0;
}