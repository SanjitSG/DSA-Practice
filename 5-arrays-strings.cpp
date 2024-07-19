#include <bits/stdc++.h>

using namespace std;

int main()
{

  //* -> Array - 1D array, initialization, assigning values, accessing value, updating value;

  /*
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    cout << arr[3] << endl;

    // updating value at index 3
    arr[3] = 12;
    cout << arr[3] << endl;

    // performing operation
    arr[2] += 10;
    cout << arr[2];

    */

  // * -> 2D Array
  /*
    // -> initialization
    int arr[3][6];

    //assigning a value
    arr[1][3] = 45;

  //accessing a value
    cout << arr[1][3];

    */

  //* -> String

  string str = "Sanjit";
  cout << str[3] << "\n";

  int len = str.size();
  cout << len << "\n";

  str[2] = 's';
  cout << str;
  return 0;
}