#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int number, ops, gen;
        cin >> number >> ops >> gen;

        unordered_map<int, int> lastsong;
        unordered_map<int, int> count;

        while (ops--)
        {
            char type;
            int song;
            cin >> type >> song;

            if (type == 'P')
            {
                int a;
                cin >> a;

                for (int j = 0; j < a; j++)
                {
                    int id;
                    cin >> id;

                    int old = lastsong[id];

                    if (old != 0)
                    {
                        count[old] -= 1;
                    }

                    lastsong[id] = song;
                    count[song] += 1;
                }
            }
            else
            {
                cout << count[song] << '\n';
            }
        }
    }

    return 0;
}
