#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    int didSwap = 0;
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1;
      }
    }
    if (didSwap == 0)
    {
      break;
    }
    cout << "runs" << endl;
  }
}

void insertion_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
}

int partition(int arr[], int low, int high)
{

  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {

    while (arr[i] >= pivot && i <= high - 1)
    {
      i++;
    }
    while (arr[j] > pivot && j >= low + 1)
    {
      j--;
    }

    if (i < j)
      swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void quick_sort(int arr[], int low, int high)
{
  if (low < high)
  {

    int pIndex = partition(arr, low, high);
    quick_sort(arr, low, pIndex - 1);
    quick_sort(arr, pIndex + 1, high);
  }
}
int main()
{

  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  // insertion_sort(arr, n);
  quick_sort(arr, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}