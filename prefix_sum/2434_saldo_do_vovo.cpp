#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N, S;

  cin >> N >> S;

  vector<int> bank_account(N + 1);

  int op;

  bank_account[0] = S;

  for (int i = 1; i <= N; i++)
  {
    cin >> op;
    bank_account[i] = op;
  }

  for (int j = 1; j <= N; j++)
  {
    bank_account[j] = bank_account[j - 1] + bank_account[j];
  }

  auto lowest_balance = min_element(bank_account.begin(), bank_account.end());

  cout << *lowest_balance << endl;

  return 0;
}