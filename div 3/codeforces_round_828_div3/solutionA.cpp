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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        string s;
        cin >> s;
        map<int, char> m;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[v[i]] && m[v[i]] != s[i])
            {
                flag = 1;
                break;
            }
            m[v[i]] = s[i];
        }
        if (flag)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}