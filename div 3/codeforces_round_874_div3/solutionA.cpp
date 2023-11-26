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
        string s;
        cin >> s;
        set<string> se;
        for (int i = 0; i < n - 1; i++)
        {
            string temp = "";
            temp += s[i];
            temp += s[i + 1];
            se.insert(temp);
        }
        cout << se.size() << endl;
    }
    return 0;
}