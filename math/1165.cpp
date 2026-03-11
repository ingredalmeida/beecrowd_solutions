#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    else if (n == 2) return true;
    else if (n % 2 == 0) return false;
    
    for (int i = 3; i*i <= n; i+=2)
    {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int N, X;
    cin >> N;

    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < N; i++) {
        if (isPrime(numbers[i])) {
            cout << numbers[i] << " eh primo" << endl;
        } else {
            cout << numbers[i] << " nao eh primo" << endl;
        }
    }

    return 0;
}