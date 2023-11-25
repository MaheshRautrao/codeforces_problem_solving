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
        string actual = "314159265358979323846264338327";
        string input;
        cin >> input;
        int count = 0;
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] != actual[i])
                break;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}