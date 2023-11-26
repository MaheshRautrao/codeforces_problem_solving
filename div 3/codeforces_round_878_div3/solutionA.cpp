#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ind = 0;

        while (ind < n)
        {
            char ch = s[ind++];
            cout << ch;
            while (s[ind] != ch)
                ind++;
            ind++;
        }
        cout << endl;
    }
    return 0;
}