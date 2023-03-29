#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setprecision(2) << fixed;

    for (int t = 0; t < T; t++)
    {
        int D, N;
        cin >> D >> N;

        float price;
        float maxChange = 0;
        for (int n = 0; n < N; n++)
        {
            cin >> price;

            int nProducts = D / price;

            if (nProducts == 0)
            {
                continue;
            }

            float change = (D / price - nProducts) * price;
            maxChange = max(maxChange, change);
        }

        cout << maxChange << endl;
    }
}