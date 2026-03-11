#include <iostream>
#include <queue>
#include <vector>
#include <functional> 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, L;
  cin >> N >> L;

  vector<int> sellers(N, 0);

  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

  for (int id = 1; id <= N; id++)
  {
    pq.push({0LL, id});
  }

  for (int i = 0; i < L; i++)
  {
    int t;
    cin >> t;

    auto [free_time, id] = pq.top();
    pq.pop();

    sellers[id - 1]++;

    long long new_free_time = free_time + t;
    pq.push({new_free_time, id});
  }

  for (int id = 1; id <= N; id++)
  {
    cout << id << " " << sellers[id - 1] << "\n";
  }

  return 0;
}
