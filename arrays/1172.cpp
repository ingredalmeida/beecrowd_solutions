#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    const int N = 10;
    vector<int> numbers(N);

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (numbers[i] <= 0) {
            numbers[i] = 1;
        }
        cout << "X[" << i << "] = " << numbers[i] << endl;
    }
    
    return 0;
}