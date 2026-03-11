#include <iostream>
#include <stdio.h>
#include <map>
#include <iomanip>

using namespace std;

int main()
{
  int n;
  cin >> n;

  string line;
  getline(cin, line);
  getline(cin, line);

  for (int i = 0; i < n; i++)
  {
    map<string, int> tree_species;
    long long total = 0; // test case of this up to 1,000,000 trees

    while (getline(cin, line))
    {
      if (!line.empty() && line.back() == '\r')
      {
        line.pop_back();
      }

      if (line.empty())
      {
        break;
      }

      tree_species[line]++;
      total++;
    }

    cout << fixed << setprecision(4);
    for (auto &tree : tree_species)
    {
      double percentage = 100 * tree.second / (double)total;
      cout << tree.first << " " << percentage << "\n";
    }
    
    if (i != n - 1) cout << "\n";
  }

  return 0;
}
