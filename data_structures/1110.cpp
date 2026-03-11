#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

int main()
{
  queue<int> cards;
  queue<int> discarded_cards;

  int n;

  while (scanf("%d", &n) == 1 && n != 0)
  {
    queue<int> cards;
    queue<int> discarded_cards;

    for (int i = 1; i <= n; i++)
    {
      cards.push(i);
    }

    while (cards.size() > 1)
    {
      discarded_cards.push(cards.front());
      cards.pop();

      int moved = cards.front();
      cards.pop();
      cards.push(moved);
    }

    printf("Discarded cards: ");

    while (!discarded_cards.empty())
    {
      printf("%d", discarded_cards.front());
      discarded_cards.pop();

      if (!discarded_cards.empty())
        printf(", ");
    }

    printf("\nRemaining card: %d\n", cards.front());
  }

  return 0;
}

// VERSÃO COM DEQUE
/*
#include <cstdio>
#include <deque>

int main() {
  int n;

  while (scanf("%d", &n) == 1 && n != 0) {
    std::deque<int> d;
    for (int i = 1; i <= n; i++) d.push_back(i);

    std::printf("Discarded cards:");
    bool first = true;

    while (d.size() > 1) {
      int discarded = d.front();
      d.pop_front();

      if (first) { std::printf(" %d", discarded); first = false; }
      else       { std::printf(", %d", discarded); }

      int moved = d.front();
      d.pop_front();
      d.push_back(moved);
    }

    std::printf("\nRemaining card: %d\n", d.front());
  }

  return 0;
}
*/