/* Q. Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range. */

#include<bits/stdc++.h>

using namespace std;

int findMissing(int arr[], int n){

  int xor1 = 0; int xor2 = 0;

  for(int i=0; i<n; i++){
    xor1 ^= i;
    xor2 ^= arr[i];
  }
  xor1^= n;
  return xor1 ^ xor2;
}

int main(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++) cin>> arr[i];
  cout << "Missing Number is: " << findMissing(arr, n) << endl;

  for(int i=0; i<n; i++) cout<< arr[i] << " ";
}