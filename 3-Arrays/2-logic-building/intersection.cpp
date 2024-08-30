#include <bits/stdc++.h>

using namespace std;

void intersection(int n, int m, int arr1[], int arr2[])
{

  vector<int> ans;
  int i = 0, j = 0;

  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      i++;
    }
    else if (arr2[j] < arr1[i])
    {
      j++;
    }
    else
    {
      ans.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  for (int num : ans)
  {
    cout << num << " ";
  }
}

int main()
{

  int n, m;
  cin >> n >> m;

  int arr1[n];
  int arr2[m];

  for (int i = 0; i < n; i++)
    cin >> arr1[i];
  for (int i = 0; i < m; i++)
    cin >> arr2[i];

  intersection(n, m, arr1, arr2);

  return 0;
}