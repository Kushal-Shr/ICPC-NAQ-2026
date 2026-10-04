#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;

        int ans = n - 1;

        bool isPossible = true;

        for (int j = 0; j < m; j++)
        {
            int a, b;
            cin >> a >> b;

            if (a > b)
                isPossible = false;

            if (b == a + 1)
                ans--;
        }

        if (!isPossible)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}