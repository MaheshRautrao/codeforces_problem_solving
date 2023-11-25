#include <bits/stdc++.h>
using namespace std;

bool check(int ind, string s, char arr[])
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != arr[(ind++) % 3])
            return false;
    }
    return true;
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
        string s;
        cin >> s;
        string parent = "";
        for (int i = 0; i < 18; i++)
            parent += "Yes";

        if (parent.find(s) != string::npos)
            cout << parent.find(s) << endl;
        else
            cout << "NO" << endl;
        // char arr[3] = {'Y', 'e', 's'};
        // int flag = 1;

        // if (s[0] == 'Y')
        //     flag = check(0, s, arr);
        // else if (s[0] == 'e')
        //     flag = check(1, s, arr);
        // else if (s[0] == 's')
        //     flag = check(2, s, arr);
        // else
        //     flag = 0;

        // cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}