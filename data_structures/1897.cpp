#include <iostream>
#include <stdio.h>
#include <set>
#include <utility>

using namespace std;

int main()
{
  int N, M;

  cin >> N;
  cin >> M;

  // ERRADO: É BUSCA POR NIVEL ENTÃO USAR BFS -> chatgpt disse que da pra usar queue pra bfs

  int total_operations = 0;

  // será que N pode ser igual a M de cara?
  if (M == N)
  {
    cout << 0 << endl;
    return 0;
  }

  set<pair<int, int>> level_result;
  level_result.insert({N, 0});

  while (true)
  {
    // passar o level_result da vez e cada um dos seus valores pelas operações
    // vai gerar um novo conjunto
    // se esse conjunto tiver o valor M, interrompe o loop
    // enquanto isso a cada loop eu somo uma operação

    if (level_result.count({M, 1}) == 1)
    {
      break;
    }

    for (const auto &pair : level_result)
    {
      if (pair.second != 0)
      {
        level_result.insert({(pair.second * 2), 0});
        level_result.insert({(pair.second * 3), 0});
        level_result.insert({(pair.second / 2), 0});
        level_result.insert({(pair.second / 3), 0});
        level_result.insert({(pair.second + 7), 0});
        level_result.insert({(pair.second - 7), 0});
      }
    }

    total_operations += 1;
  }

  return total_operations;
}
