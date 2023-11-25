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
        string a, b;
        cin >> a >> b;

        char aa = a.back();
        char bb = b.back();

        int as = a.length();
        int bs = b.length();

        if (aa == bb)
        {

            if (as == bs)
                cout << '=';
            else if (aa == 'S')
                as > bs ? cout << "<" : cout << ">";
            else
                as > bs ? cout << ">" : cout << "<";
        }
        else
            cout << (aa < bb ? '>' : '<');
        cout << endl;
    }
    return 0;
}