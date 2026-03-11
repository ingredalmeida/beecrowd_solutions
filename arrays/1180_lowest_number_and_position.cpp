#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int N;

    cin >> N;

    int smallest = INT_MAX;
    int position = -1;
    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < N; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
            position = i;
        }
    }

    cout << "Menor valor: " << smallest << endl;
    cout << "Posicao: " << position << endl;
    
    return 0;
}