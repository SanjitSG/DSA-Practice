#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // pre-compute
  unordered_map<int, int> hash;
  for (int i = 0; i < n; i++)
  {
    hash[arr[i]]++;
  }

  int q;
  cin >> q;

  int l_value = INT_MAX;
  int h_value = INT_MIN;
  int l_count = INT_MAX;
  int h_count = INT_MIN;

  while (q--)
  {
    int num;
    cin >> num;

    // fetch
    cout << num << " -> " << hash[num] << endl;
    if (hash[num] < l_count)
    {
      l_count = hash[num];
      l_value = num;
    }
    if (hash[num] > h_count)
    {
      h_count = hash[num];
      h_value = num;
    }
  }
  cout << "lowest frequency value -> " << l_value << " with frequency " << l_count << endl;
  cout << "highest frequency value -> " << h_value << " with frequency " << h_count << endl;
  return 0;
}