#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void randomize(int arr[], int n)
{

    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {
        int t = rand();
        cout << t << endl;
        int j = t % (i + 1);

        swap(arr[i], arr[j]);
    }
}

// Driver Code
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    randomize(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}