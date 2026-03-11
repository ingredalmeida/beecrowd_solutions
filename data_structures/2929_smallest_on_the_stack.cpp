#include <iostream>
#include <stdio.h>
#include <stack>
#include <climits>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);

  stack<int> st;
  stack<int> mins;

  for (int i = 0; i < n; i++)
  {
    char command[8];
    scanf("%7s", command);

    if (command[0] == 'P' && command[1] == 'U')
    {
      int value;
      scanf("%d", &value);

      st.push(value);

      if (mins.empty())
        mins.push(value);
      else
        mins.push(min(value, mins.top()));

      continue;
    }

    if (command[0] == 'P' && command[1] == 'O')
    {
      if (st.empty())
        printf("EMPTY\n");
      else
      {
        st.pop();
        mins.pop();
      }

      continue;
    }

    if (command[0] == 'M')
    {
      if (st.empty())
        printf("EMPTY\n");
      else
      {
        printf("%d\n", mins.top());
      }
    }
  }

  return 0;
}
