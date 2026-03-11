#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fib(i);
        if (i < n - 1) cout << " ";
    }

    cout << endl;

    return 0;
}