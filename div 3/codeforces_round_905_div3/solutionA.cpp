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

        sort(v.begin(), v.end());
        int i = 0;
        int j = v.size() - 1;
        int ans = 0;
        while (i < j)
        {
            ans += v[j] - v[i];
            i++, j--;
        }
        cout << ans << endl;
    }
    return 0;
}