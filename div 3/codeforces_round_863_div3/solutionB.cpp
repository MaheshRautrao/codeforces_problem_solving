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
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int first = min(x1, min(n - x1 + 1, min(y1, n - y1 + 1)));
        int second = min(x2, min(n - x2 + 1, min(y2, n - y2 + 1)));
        cout << abs(first - second) << endl;
    }
    return 0;
}