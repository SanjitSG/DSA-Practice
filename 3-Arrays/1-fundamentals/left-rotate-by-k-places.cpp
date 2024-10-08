#include <bits/stdc++.h>

using namespace std;

void reverse(int arr[], int start, int end){
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void rotateArr(int arr[], int n, int k){
  k  = k % n;

  reverse(arr, 0, k-1);
  reverse(arr, k, n-1);
  reverse(arr, 0, n-1);
}

int main()
{

  int n;
  cin >> n;
  int k;
  cin >> k;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  rotateArr(arr, n, k);

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}