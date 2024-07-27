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

#include <iostream>
#include <utility>
#include <vector>
// *Pairs - it is a part of utility library.

using namespace std;
void explainPair()
{
  cout << "------------------PAIR START----------------" << endl;

  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;

  // nested pairs - hers pair can be a datatype
  pair<int, pair<int, int>> n = {1, {3, 5}};
  cout << n.second.second << " " << n.second.first << endl;

  // pair array
  pair<int, int> arr[] = {{1, 4}, {3, 6}, {5, 1}};
  cout << arr[1].second;

  cout << endl
       << "------------------PAIR END----------------" << endl;
}

//* Containers

//* 1. Vectors

void explainVectors()
{
  cout << "------------------VECTOR START----------------" << endl;

  // 1. initialization and inserting values to vector using member functions.
  vector<int> v;
  v.push_back(3);
  v.emplace_back(5);
  // cout << v[1];

  // 2. vector of pair datatypes
  vector<pair<int, int>> vectorPair;
  vectorPair.push_back({1, 7});
  vectorPair.emplace_back(2, 8); // no need to use curly braces
  // cout << vectorPair[1].first;

  // 3. Defining a container with pre-defined size and elements
  vector<int> vec(5, 100);
  vector<int> vec2(5); // garbage value => {0,0,0,0,0}

  // 4. Copying container to some other vector
  vector<int> v1(5, 29);
  vector<int> v2(v1);

  // Accessing vectors
  // 1. using bracket notation
  //  cout << v[0];

  // 2. Using Iterators
  // vector<int>::iterator it = v.begin();
  // cout << *(it);
  // vector<int>::iterator it = v.end();
  // cout << *(it);
  vector<int> vet(5, 1);
  vet.push_back(2);
  vet.push_back(4);
  vet.push_back(6);
  vet.push_back(8);

  // => printing using for loop

  // for (vector<int>::iterator it = vet.begin(); it != vet.end(); it++)
  // {
  //   cout << *(it) << " ";
  // }

  // -> auto keyword
  // for (auto it = vet.begin(); it != vet.end(); it++)
  // {
  //   cout << *(it) << " ";
  // }

  // => using for each loop
  for (auto it : vet)
  {
    cout << it << " ";
  }
  cout << endl;
  // deletion in vectors
  vet.erase(vet.begin() + 6);
  for (auto it : vet)
  {
    cout << it << " ";
  }

  // insertion
  // other functions
  // .size | .swap | .pop_back | .clear | .empty

  cout << endl
       << "------------------VECTOR END----------------" << endl;
}

//* 2.list
// similar to vectors with addition of push_front and emplace_front functions.

//* 3. Deque
// Similar to vector and list with addition of pop_back, pop_front dq.back, dq.front

//* 4. Stack (LIFO - Last in First Out)
// Three generic functions of Stack are push, pop, top
int main()
{
  // explainPair();
  // explainVectors();

  return 0;
}