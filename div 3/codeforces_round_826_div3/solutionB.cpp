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

        if (n == 3)
        {
            cout << -1 << endl;
            continue;
        }

        if (n % 2 == 0)
        {
            int temp = n;
            while (temp > n / 2)
                cout << temp-- << " ";
            temp = 1;
            while (temp <= n / 2)
                cout << temp++ << " ";
        }
        else
        {
            int temp = n;
            while (temp > n / 2 + 1)
                cout << temp-- << " ";
            temp = 1;
            while (temp <= n / 2 + 1)
                cout << temp++ << " ";
        }
        cout << endl;
    }
    return 0;
}