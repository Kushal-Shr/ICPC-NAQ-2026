#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    const long long big = 998244353;

    long long a = n;
    long long b = n + 1;
    long long c = n + 2;

    if (a % 2 == 0)
        a /= 2;
    else if (b % 2 == 0)
        b /= 2;
    else
        c /= 2;
    if (a % 3 == 0)
    {
        a /= 3;
    }
    else if (b % 3 == 0)
    {
        b /= 3;
    }
    else
    {
        c /= 3;
    }
    a %= big;
    b %= big;
    c %= big;
    long long ans = a * b % big;
    ans = ans * c % big;

    cout << ans << '\n';
    return 0;
}