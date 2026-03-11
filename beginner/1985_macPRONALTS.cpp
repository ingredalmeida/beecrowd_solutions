#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

int main() {
    map<int, float> products;
    
    products[1001] = 1.50;
    products[1002] = 2.50;
    products[1003] = 3.50;
    products[1004] = 4.50;
    products[1005] = 5.50;

    int n, code, quantity;
    float price = 0.0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> code >> quantity;

        if (products.find(code) != products.end()) {
            price += products[code] * quantity;
        } 
    }
    
    cout << fixed << setprecision(2) << price << endl;

    return 0;
}