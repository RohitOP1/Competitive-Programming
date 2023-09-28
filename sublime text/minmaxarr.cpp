#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx = INT_MIN;
        int mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
            if (arr[i] < mi)
            {
                mi = arr[i];
                
            }
        }

        // Move these cout statements outside of the for loop to print the max and min once.
        cout << "MAX: " << mx << endl;
        cout << "MIN: " << mi << endl;
    }

    return 0;
}
