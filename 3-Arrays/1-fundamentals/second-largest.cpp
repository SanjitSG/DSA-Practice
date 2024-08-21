#include <bits/stdc++.h>

using namespace std;

int secondLargest(vector<int> &nums)
{
  if (nums.size() < 2)
    return -1;

  sort(nums.begin(), nums.end());

  int largest = nums.back();
  int sl = -1;
  
  for (int i = nums.size() - 1; i >= 0; i--)
  {
    if (nums[i] != largest)
    {
     sl = nums[i];
     break;
    }
  }
  return sl;
}

int main()
{
  int n;
  cin >> n;

  vector<int> nums;
  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    nums.push_back(val);
  }

  cout << "Second largest : " << secondLargest(nums);
}