#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int T;
    cin >> T;
    
    for (int t = 0; t < T; t++) {
        int D, N;
        cin >> D >> N;

        float x;
        float maxChange = 0;
        for (int n = 0; n < N; n++) {
            cin >> x;

            float nProducts = D / (int) x;
            float change = (D / x - nProducts) * x;
            maxChange = max<float>(maxChange, change);
        }

        cout << maxChange << endl;
    }
}