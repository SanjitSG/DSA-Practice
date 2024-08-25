#include<bits/stdc++.h>

using namespace std;

void moveZero(int arr[], int n){

  vector<int> temp;

// copy non-zero elements to a temp array
  for(int i=0; i<n;i++){
    if(arr[i] != 0){
      temp.push_back(arr[i]);
    }
  }

// copy non-zero elements to original array from the non zero array
for(int i=0;i<temp.size();i++){
  arr[i] = temp[i];
}

//put zeros to the end of the original array

for (int i = temp.size(); i < n; i++)
{
  arr[i] = 0;
}


}

int main(){
 int n;
 cin >> n;
 
 int arr[n];
 for(int i=0; i<n; i++) cin>> arr[i];

moveZero(arr, n);

 for (int i = 0; i < n; i++)
   cout << arr[i] << " ";
}