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
        int m, s;
        cin >> m >> s;
        vector<int> v(m);
        int sum = 0;
        int maxe = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
            sum += v[i];
            maxe = max(maxe, v[i]);
        }
        int mainsum = maxe * (maxe + 1) / 2;
        int rsum = mainsum - sum;

        if (rsum > s)
        {
            cout << "NO" << endl;
            continue;
        }

        int flag = 0;

        while (rsum != s)
        {
            rsum += ++maxe;
            if (rsum > s)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}