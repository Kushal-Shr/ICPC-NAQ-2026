#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        string str = "sh";

        for (int j = 0; j < num; j++)
        {
            str += 'h';
        }

        cout << str << '\n';
    }

    return 0;
}