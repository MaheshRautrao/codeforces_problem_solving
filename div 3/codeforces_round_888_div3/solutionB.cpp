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
        vector<int> temp = v;
        sort(v.begin(), v.end());
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if ((v[i] & 1) == (temp[i] & 1))
                ;
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}