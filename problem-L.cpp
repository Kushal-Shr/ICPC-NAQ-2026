#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int p;
        cin >> n >> p;
        int total = 0;
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            total += vec[i];
        }

        double oneSec = (double)p / total;
        double answer = 0;

        for (auto ch : vec)
        {
            double z = oneSec * ch;
            answer += pow(z, 2) / ch;
        }

        cout << fixed << setprecision(10) << answer << '\n';
    }
    return 0;
}