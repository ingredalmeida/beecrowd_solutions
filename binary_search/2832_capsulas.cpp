#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

bool reached_f_coins(ll day, const vector<int> &cycles, ll F)
{
  ll total = 0;
  for (int cycle : cycles)
  {
    total += day / cycle;
    if (total >= F)
      return true; 
  }
  return total >= F;
}

int main()
{
  int N;
  ll F;
  cin >> N >> F;

  vector<int> cycles(N);
  for (int i = 0; i < N; i++)
  {
    cin >> cycles[i];
  }

  ll lo = 0;
  ll hi = 100000000; // 10^8

  while (lo < hi)
  {
    ll mid = (lo + hi) / 2;
    if (reached_f_coins(mid, cycles, F))
      hi = mid;
    else
      lo = mid + 1;
  }

  cout << lo << "\n";
  return 0;
}
