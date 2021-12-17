// Given an array, rotate the array by one position in clock-wise direction.
#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
  int last = arr[n - 1];
  for (int i = n - 1; i >= 1; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[0] = last;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  rotate(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }

  return 0;
}