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
        int n, d;
        cin >> n >> d;
        string s;
        cin >> s;
        string ans = "";
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (flag == 0 && (s[i] - int('0') < d))
            {
                ans += char(d + 48);
                flag = 1;
            }
            ans += s[i];
        }
        if (flag == 0)
            ans += char(d + 48);
        cout << ans << endl;
    }
    return 0;
}