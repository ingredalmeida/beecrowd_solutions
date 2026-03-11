#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, Q;
  int case_id = 1;

  while (cin >> N >> Q)
  {
    if (N == 0 && Q == 0)
    {
      break;
    }

    cout << "CASE# " << case_id << ":" << endl;

    vector<int> marbles(N);
    for (int i = 0; i < N; i++)
    {
      cin >> marbles[i];
    }

    sort(marbles.begin(), marbles.end());

    int query;
    for (int i = 0; i < Q; i++)
    {
      cin >> query;
      auto it = lower_bound(marbles.begin(), marbles.end(), query);

      if (it != marbles.end() && *it == query)
      {
        cout << query << " found at " << (it - marbles.begin() + 1) << endl;
      }
      else
      {
        cout << query << " not found" << endl;
      }
    }

    case_id += 1;
  }

  return 0;
}