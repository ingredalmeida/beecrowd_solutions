#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int X;
    int count = 0;

    cin >> X;

    while (true)
    {
        if (X % 2 != 0 && count != 6) {
            cout << X << endl;
            count++;
        }

        if (count == 6) {
            break;
        }

        X++;
    }

    return 0;
}