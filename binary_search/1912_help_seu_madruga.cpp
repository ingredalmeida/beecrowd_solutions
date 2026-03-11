#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

double removed_area(const vector<int>& heights, double h) {
    double total = 0.0;
    for (int c : heights) {
        if (c > h) {
            total += (c - h);
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        long long A;
        cin >> n >> A;

        if (n == 0 && A == 0) break;

        vector<int> heights(n);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> heights[i];
            total += heights[i];
        }

        if (total == A) {
            cout << ":D\n";
            continue;
        }

        if (total < A) {
            cout << "-.-\n";
            continue;
        }

        double low = 0.0;
        double high = *max_element(heights.begin(), heights.end());

        while (high - low > 1e-7) {
            double mid = (low + high) / 2.0;
            double area = removed_area(heights, mid);

            if (area > A) {
                low = mid;
            } else {
                high = mid;
            }
        }

        cout << fixed << setprecision(4) << high << "\n";
    }

    return 0;
}