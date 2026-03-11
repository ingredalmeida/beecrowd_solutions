#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> pattern;

    int i = 1;
    while (i < n)
    {
        if (heights[i] < heights[i - 1]) {
            pattern.push_back(1); // pico
        }
        else if (heights[i] > heights[i - 1]) {
            pattern.push_back(0); // vale
        } 
        else {
            cout << 0 << endl; //altura igual => padrão diferente
            return 0;
        }

        i += 1;
    }
    
    for (int j = 1; j < pattern.size(); j++) {
        if (pattern[j] == pattern[j - 1]) {
            cout << 0 << endl; //altura igual => padrão diferente
            return 0;
        }
    }

    cout << 1 << endl;
    
    return 0;
}