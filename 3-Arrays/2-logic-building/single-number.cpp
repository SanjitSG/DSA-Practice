#include<bits/stdc++.h>

using namespace std;

int findNum(int arr[], int n){

int xorr= 0;

for(int i=0; i<n;i++){
  xorr ^= arr[i];
}
return xorr;
}

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Number is: " << findNum(arr, n) << endl;

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}