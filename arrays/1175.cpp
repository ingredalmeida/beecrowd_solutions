#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    const int N = 20;

    vector<int> numbers(N);
    vector<int> modifiedNumbers(N);

    int j = N - 1;

    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
        modifiedNumbers[j] = numbers[i];
        j--;
    }
    
    for (int i = 0; i < N; i++)
    {
        cout << "N[" << i << "] = " << modifiedNumbers[i] << endl;
    }

    return 0;
}