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
        int n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<vector<int>> qv(q, vector<int>(2));
        for (int i = 0; i < q; i++)
            cin >> qv[i][0] >> qv[i][1];

        int even = 0, odd = 0;
        long long sum = 0;
        for (auto x : v)
        {
            sum += x;
            if (x & 1)
                odd++;
            else
                even++;
        }

        for (int i = 0; i < q; i++)
        {
            if (qv[i][0])
            {
                sum += 1ll * odd * qv[i][1];
                if (qv[i][1] & 1)
                {
                    even += odd;
                    odd = 0;
                }
            }
            else
            {
                sum += 1ll * even * qv[i][1];
                if (qv[i][1] & 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}