#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        long long square = pow(i, 2);
        long long cube = pow(i, 3);

        cout << i << " " << square << " " << cube << endl;
        cout << i << " " << (square + 1) << " " << (cube + 1) << endl;
    }
    return 0; 
}