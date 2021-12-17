// Union of two arrays
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int doUnion(int a[], int n, int b[], int m)
  {
    unordered_set<int> u;

    for (int i = 0; i < n; i++)
    {
      u.insert(a[i]);
    }

    for (int i = 0; i < m; i++)
    {
      u.insert(b[i]);
    }

    return u.size();
  }
};

int main()
{
  Solution sol;

  int a[] = {0, 1, 2, 3, 4, 5};
  int b[] = {10};
  int n = sizeof(a) / sizeof(int);
  int m = sizeof(b) / sizeof(int);

  cout << sol.doUnion(a, n, b, m) << endl;

  return 0;
}