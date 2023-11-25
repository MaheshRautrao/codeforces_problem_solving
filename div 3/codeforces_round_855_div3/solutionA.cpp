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
        int flag = 1;

        while (ind < n && s[ind] == 'm' || s[ind] == 'M')
        {
            flag = 0;
            ind++;
        }
        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        flag = 1;

        while (ind < n && s[ind] == 'e' || s[ind] == 'E')
        {
            flag = 0;
            ind++;
        }
        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        flag = 1;

        while (ind < n && s[ind] == 'o' || s[ind] == 'O')
        {
            flag = 0;
            ind++;
        }
        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        flag = 1;

        while (ind < n && s[ind] == 'w' || s[ind] == 'W')
        {
            flag = 0;
            ind++;
        }

        if (!flag && ind == n)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}