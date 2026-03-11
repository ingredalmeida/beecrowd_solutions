#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    int minVal = min(X, Y);
    int maxVal = max(X, Y);

    int result = 0;
    for (int i = minVal + 1; i < maxVal; i++) {
        if (i % 2 != 0) {
            result += i;
        }
    }

    cout << result << endl;
    return 0;
}
