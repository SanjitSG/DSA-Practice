#include <bits/stdc++.h>

using namespace std;

// remove duplicates from sorted array

int removeDuplicates(vector<int> &nums, int n)
{

  set<int> s;

  for (int num : nums)
  {
    s.insert(num);
  }

  int setSize = s.size();
  int j = 0;

  // Copy unique elements from set to nums
  for (int x : s)
  {
    nums[j++] = x;
  }
  return setSize;
}

int main()
{
  int n;
  cin >> n;

  vector<int> nums;

  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    nums.push_back(num);
  }

  int uniqueElements = removeDuplicates(nums, n);
  
  cout << "Unique Elements: " << uniqueElements <<  endl;

  for (int i = 0; i < uniqueElements; i++)
  {
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}