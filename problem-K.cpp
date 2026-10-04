#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(0));

    int T;
    cin >> T;

    int N = 200;

    while (T--)
    {
        for (int i = 0; i < N / 2; ++i)
        {
            char guess1 = (rand() % 2 == 0) ? 'T' : 'F';
            cout << guess1 << endl;

            string ans1;
            cin >> ans1;

            if (ans1 != "T" && ans1 != "F")
                return 0;

            char guess2 = (ans1 == "T") ? 'F' : 'T';
            cout << guess2 << endl;

            string ans2;
            cin >> ans2;

            if (ans2 != "T" && ans2 != "F")
                return 0;
        }
    }

    return 0;
}