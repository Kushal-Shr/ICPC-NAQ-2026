#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int size;
        cin >> size;

        vector<bool> vec(4, false);

        for (int j = 0; j < size; j++)
        {
            int num;
            cin >> num;

            if (num >= 1 && num <= 10)
                vec[0] = true;
            else if (num > 10 && num <= 20)
                vec[1] = true;
            else if (num > 20 && num <= 30)
                vec[2] = true;
            else if (num > 30 && num <= 40)
                vec[3] = true;
        }

        int ans = 0;

        for (bool ch : vec)
        {
            if (ch)
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}