#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin >> k;

    for (int x = 0; x < k; x++)
    {
        int n;
        cin >> n;

        int a = n - 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == a)
                    cout << 'C';
                else
                    cout << '.';
            }
            cout << '\n';
            a--;
        }
    }

    return 0;
}