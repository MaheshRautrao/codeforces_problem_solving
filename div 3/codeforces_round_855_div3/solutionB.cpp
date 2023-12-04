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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> capital(26, 0), small(26, 0);

        for (auto x : s)
        {
            if (x < 91)
                capital[x - 65]++;
            else
                small[x - 97]++;
        }

        int ans = 0;
        int temp = 0;

        for (int i = 0; i < 26; i++)
        {

            temp = 0;
            ans += min(capital[i], small[i]);
            temp += (max(capital[i], small[i]) - min(capital[i], small[i])) / 2;

            if (k > 0)
                ans += min(temp, k);

            k -= temp;
        }
        cout << ans << endl;
    }
    return 0;
}