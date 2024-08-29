#include <bits/stdc++.h>

using namespace std;

void unionn(vector<int> nums1, vector<int> nums2)
{
  int n = nums1.size();
  int m = nums2.size();

  vector<int> Union;

  // two pointers
  int i = 0, j = 0;

  while (i < n && j < m)
  {
    if (nums1[i] < nums2[j])
    {
      if (Union.size() == 0 || Union.back() != nums1[i])
        Union.push_back(nums1[i]);
      i++;
    }
    else
    {
      if (Union.size() == 0 || Union.back() != nums2[j])
        Union.push_back(nums2[j]);
      j++;
    }
  }

  // if elements are left from first array

  while (i < n)
  {
    if (Union.back() != nums1[i])
      Union.push_back(nums1[i]);
    i++;
  }
  while (j < m)
  {
    if (Union.back() != nums2[j])
      Union.push_back(nums2[j]);
    j++;
  }

  cout << "[ ";
  for (int i : Union)
  {
    cout << i << " ";
  }
  cout << "]";
}

int main()
{
  int n;
  cin >> n;
  int m;
  cin >> m;

  vector<int> nums1;
  vector<int> nums2;

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    nums1.push_back(num);
  }
  for (int i = 0; i < m; i++)
  {
    int num;
    cin >> num;
    nums2.push_back(num);
  }

  unionn(nums1, nums2);

  return 0;
}