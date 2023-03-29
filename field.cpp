#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    int P = 0;
    for (int x, i = 0; i < N; i++)
    {
        cin >> x;
        v[i] = x;
        P += x;
    }

    if (P % 2 != 0)
    {
        cout << "N\n";
        return 0;
    }

    int diagonals = 0;
    int totalDist = 0;
    int dist = 0;
    int i = 0, j = 0;
    while (totalDist < P)
    {
        if (dist < P / 2)
        {
            totalDist += v[j];
            dist += v[j];
            j++;
        }
        else
        {
            if (dist == P / 2)
            {
                diagonals++;
            }

            dist -= v[i];
            i++;
        }
    }

    if (diagonals > 1)
    {
        cout << "Y\n";
    }
    else
    {
        cout << "N\n";
    }
}