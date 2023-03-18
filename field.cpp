#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    int P = 0;
    for (int x, i = 0; i < N; i++) {
        cin >> x;
        v[i] = x;
        P += x;
    }

    if (P % 2 != 0) {
        cout << "N\n";
        return 0;
    }

    int diagonals = 0;
    int totalDist = 0;
    for (int i = 0; i < N; i++) {
        totalDist += v[i];
        if (totalDist > P / 2) {
            break;
        }

        int dist = 0;

        for (int j = i + 1; j < N; j++) {
            dist += v[j];

            if (dist == P / 2) {
                diagonals++;
                break;
            }
            if (dist > P / 2) {
                break;
            }
        }
    }

    cout << diagonals << endl;
    if (diagonals > 1) {
        cout << "Y\n";
    } else {
        cout << "N\n";
    }
}