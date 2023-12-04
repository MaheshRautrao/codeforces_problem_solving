#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v)
{
    sort(v.begin(), v.end());
    if (v[0] % 2 == 1)
    {
        cout << "YES" << endl;
        return;
    }
    for (auto it : v)
        if (it % 2 == 1)
        {
            cout << "NO" << endl;
            return;
        }
    cout << "YES" << endl;
}

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
        solve(v);
    }
    return 0;
}
