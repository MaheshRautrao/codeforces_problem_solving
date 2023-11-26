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
        int n, t;
        cin >> n >> t;
        vector<int> v(n), e(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n; i++)
            cin >> e[i];

        int ans = -1;
        int maxe = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > t)
                ;

            else
            {
                if (maxe < e[i])
                {
                    ans = i + 1;
                    maxe = e[i];
                }
            }
            t--;
        }

        cout << ans << endl;
    }
    return 0;
}