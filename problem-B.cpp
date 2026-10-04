#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int i = 0, j = 1, k = 2;

    int ans = 0;

    while (k < n)
    {
        if (vec[j] - vec[i] > vec[k] - vec[j])
            ans++;

        i++;
        j++;
        k++;
    }

    cout << ans;

    return 0;
}