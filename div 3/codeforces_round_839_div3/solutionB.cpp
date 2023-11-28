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
        vector<int> v(4);
        for (int i = 0; i < 4; i++)
            cin >> v[i];
        int maxi = 0, mini = 0;
        int maxe = v[0], mine = v[0];
        for (int i = 1; i < 4; i++)
        {
            if (v[i] > maxe)
            {
                maxe = v[i];
                maxi = i;
            }
            if (v[i] < mine)
            {
                mine = v[i];
                mini = i;
            }
        }
        if (maxi + mini == 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}