#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<bool> vec(200, false);

    int num;
    cin >> num;

    bool ans = vec[num];
    cout << ans;

    bool correct;
    cin >> correct;

    if (correct)
    {
        if (ans)
        {
            if (num % 2 == 0)
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = true;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = false;
            }

            else
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = false;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = true;
            }
        }
        else
        {
            if (num % 2 == 0)
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = false;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = true;
            }

            else
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = true;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = false;
            }
        }
    }

    else
    {
        if (ans)
        {
            if (num % 2 == 0)
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = false;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = true;
            }

            else
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = true;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = false;
            }
        }
        else
        {
            if (num % 2 == 0)
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = true;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = false;
            }

            else
            {
                for (int i = 2; i <= 200; i += 2)
                    vec[i] = false;
                for (int i = 1; i <= 200; i += 2)
                    vec[i] = true;
            }
        }
    }

    return 0;
}