// TODO - STL stands for Standard Template Library

/*
STL is divided into 4 parts
1. Algorithms
2. Containers
3. Functions
    - void
    - return
    - parameterized
    - non - parameterized
4. Iterators
*/

// *Pairs - it is a part of utility library.
#include <iostream>
#include <utility>

using namespace std;
void explainPair()
{

  pair<int, int> p = {1, 3};
  cout << p.first << p.second;
}

int main()
{
  explainPair();
  return 0;
}