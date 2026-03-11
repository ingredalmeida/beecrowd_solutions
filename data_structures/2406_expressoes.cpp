#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    string line;
    cin >> line;

    stack<char> st;
    bool ok = true;

    for (char c : line)
    {
      if (c == '(' || c == '{' || c == '[')
      {
        st.push(c);
        continue;
      }

      if (st.empty())
      {
        ok = false;
        break;
      }

      char top = st.top();
      if ((c == ')' && top == '(') ||
          (c == ']' && top == '[') ||
          (c == '}' && top == '{'))
      {
        st.pop();
      }
      else
      {
        ok = false;
        break;
      }
    }

    if (ok && st.empty())
      cout << "S\n";
    else
      cout << "N\n";
  }

  return 0;
}
