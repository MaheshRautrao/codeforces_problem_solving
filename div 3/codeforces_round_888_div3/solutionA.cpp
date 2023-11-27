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
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    vector<int> h(n);
    for (int i = 0; i < n; i++)
      cin >> h[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if ((h[i] != H) && (abs(h[i] - H) % k == 0) && (abs(h[i] - H) <= (m - 1) * k))
        count++;
    }
    cout << count << endl;
  }
  return 0;
}