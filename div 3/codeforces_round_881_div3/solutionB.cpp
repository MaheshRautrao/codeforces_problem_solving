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
        long long count = 0;
        long long sum = 0;
        int open = 0;

        for (auto a : v)
        {
            sum += abs(a);
            if (a < 0 && !open)
            {
                open = 1;
                count++;
            }
            if (a > 0)
                open = 0;
        }

        cout << sum << " " << count << endl;
    }
    return 0;
}