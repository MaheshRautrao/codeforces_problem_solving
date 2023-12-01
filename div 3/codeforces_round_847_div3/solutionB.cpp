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
        int n, s, r;
        cin >> n >> s >> r;
        vector<int> ans(n, 0);
        int maxx = s - r;
        ans[n - 1] = maxx;
        int temp = r - (n - 1);

        for (int i = n - 2; i >= 0; i--)
        {
            ans[i] = 1;
            if (temp > (maxx - 1))
            {
                ans[i] += (maxx - 1);
                temp -= (maxx - 1);
            }
            else
            {
                ans[i] += temp;
                temp = 0;
            }
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}